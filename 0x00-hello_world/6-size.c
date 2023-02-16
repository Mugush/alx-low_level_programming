#include <stdio.h>
/**
 *main -prints the size of various data types
 *
 *Return:0
 */

int main(void)
{
	int b;
	long int c;
	long long int d;
	char a;
	float f;

	printf("size of char: %lu bytes(s)\n" . (unsigned long)sizeof(a));
	printf("size of int: %lu bytes(s)\n" . (unsigned long)sizeof(b));
	printf("size of long int: %lu bytes(s)\n" . (unsigned long)sizeof(c));
	printf("size of long long int: %lu bytes(s)\n" . (unsigned long)sizeof(d));
	printf("size of float: %lu bytes(s)\n" . (unsigned long)sizeof(f));
	return (0);
}
