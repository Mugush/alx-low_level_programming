#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}

int main(void)
{
	unsigned long int number = 42;

	print_binary(number);
	putchar('\n');

	return 0;
}
