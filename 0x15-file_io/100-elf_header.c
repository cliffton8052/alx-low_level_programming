#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Prints an error message to the standard error stream.
 * @message: The error message to be printed.
 *
 * This function prints an error message to the standard error stream
 * along with a newline character and is typically used to report errors
 * that occur during program execution.
 *
 * Example usage:
 *   print_error("Error: Cannot open file");
 *
 * @message: The error message to be printed.
 */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;
	const char *type_str;

	printf("ELF Header:\n");
	printf("  Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, EXIT_FAILURE on failure.
 */

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file_name>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error: Cannot open file");
		return (EXIT_FAILURE);
	}

	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1)
	{
		perror("Error: Cannot read ELF header");
		close(fd);
		return (EXIT_FAILURE);
	}

	close(fd);
	return (0);
}

