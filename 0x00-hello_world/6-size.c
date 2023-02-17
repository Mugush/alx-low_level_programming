#include <stdio.h>
/**
 *main - Prints the size of various data types
 *
 *Return:0.
 */
int main(void)
{
	int b;
	long int c;
	long long int d;
	char a;
	float f;

	printf("size of char: %lu bytes(s)\n", sizeof(char));
	printf("size of int: %lu bytes(s)\n", sizeof(int));
	printf("size of long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of float: %lu bytes(s)\n", sizeof(float));
	return (0);
}
