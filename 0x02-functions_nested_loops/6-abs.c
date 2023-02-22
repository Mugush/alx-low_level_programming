#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @e: is an integer
 * Return: 0
 */
int _abs(int e)
{
	if (e > 0)
		return (e);
	else if (e < 0)
		return (-e);
	else
		return (e);
}
