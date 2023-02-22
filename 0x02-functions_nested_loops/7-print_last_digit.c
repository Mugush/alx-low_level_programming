#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num: integer to be processed
 * Return: last digit of num
 */
int print_last_digit(int)
{
	int result;
	int num;

	result = num % 10;
	if (result < 0)
		result = -result;
	_putchar('0' + result);
	return (result);
}
