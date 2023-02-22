#include "main.h"

/**
 * _islower- checks if character is lowercase
 * @c: The character is checked
 * Return: 1 if c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
