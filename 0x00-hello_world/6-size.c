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

	printf("Size of a char: %lu byte(s)\n", sizeof(one_character));
	printf("Size of an int: %lu byte(s)\n", sizeof(one_integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(one_long_integer));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(one_long_long_int));
	printf("Size of a float: %lu byte(s)\n", sizeof(one_float));
	return (0);
}
