#include "main.h"
#include <stdio.h>
/*
 * _strlen_recursion - A function that returns the length of a string.
 * @s: The integer string to be printed out.
 *
 * Return: The length of a string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

		if (*s)
		{
			length++;
			length += _strlen_recursion(s + 1);
		}
		return (length);
}
