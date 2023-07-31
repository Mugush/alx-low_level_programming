#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of all its parameters.
 *
 * @n: The number of variable arguments.
 *     If n == 0, return 0.
 * @...: The variable arguments of type int.
 *
 * Return: The sum of all the variable arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
