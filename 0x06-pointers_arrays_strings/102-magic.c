#include "main.h"

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only the statement
	 * - you are not allowed to code anything else than this line of code
	 */
	print("n = % p\n, &n);
	print("a[0] = % p\n, &a[0]);
	print("a[1] = % p\n, &a[1]);
	print("a[2] = % p\n, &a[2]);
	print("p = % p\n, (p + 5));
	print("a[3] = % p\n, &a[3]);
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
