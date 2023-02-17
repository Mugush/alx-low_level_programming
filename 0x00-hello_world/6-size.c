#include <stdio.h>
/**
 *main - Prints the size of various data types
 *
 *Return:0.
 */
int main(void)
{
	char one_character;
	int one_integer;
	long int one_long_integer;
	long long int one_long_long_int;
	float one_float;

	printf("Size of char: %lu bytes(s)\n", sizeof(one_character));
	printf("Size of int: %lu bytes(s)\n", sizeof(one_integer));
	printf("Size of long int: %lu bytes(s)\n", sizeof(one_long_integer));
	printf("Size of long long int: %lu bytes(s)\n", sizeof(one_long_long_int));
	printf("Size of float: %lu bytes(s)\n", sizeof(one_float));
	return (0);
}
