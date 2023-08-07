#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

void print_elf_header_info(Elf64_Ehdr *header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS32)
		       	? "ELF32" : "ELF64");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB)
		       	? "2's complement, little endian" : "Unknown");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV)
		       	? "UNIX - System V" : "Unknown");
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	const char *type_str;
	switch (header->e_type)
	{
		case ET_NONE: type_str = "None"; break;
		case ET_REL: type_str = "REL"; break;
		case ET_EXEC: type_str = "EXEC"; break;
		case ET_DYN: type_str = "DYN"; break;
		case ET_CORE: type_str = "CORE"; break;
		default: type_str = "Unknown";
	}
	printf("Type: %s\n", type_str);

	printf("Entry point address: %#lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Cannot open file");

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header))
		print_error("Error: Cannot read ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1]
		       	!= ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
		       	header.e_ident[EI_MAG3] != ELFMAG3)
		print_error("Error: Not an ELF file");

	print_elf_header_info(&header);

	close(fd);
	return (0);
}

