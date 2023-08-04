#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int len = 0;
	char c;

	while (i <= n)
	{
		i *= 2;
		len++;
	}

	if (len == 0)
		putchar('0');

	while (len > 0)
	{
		i /= 2;
		len--;
		c = (n / i) + '0';
		n %= i;
		write(1, &c, 1);
	}
}
