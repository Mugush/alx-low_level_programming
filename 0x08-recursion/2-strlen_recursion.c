#include <string.h>
/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * Return: The length of string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
