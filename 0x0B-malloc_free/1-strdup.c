#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that duplicates a string
 *
 * @str: string to be duplicated
 * Return: pointer to duplicated string on success or NULL on error
 */
char *_strdup(char *str)
{
	int i;
	char *space;
	char *str_cpy;

	str_cpy = str;

	for (i = 0; str_cpy[i] != '\0'; i++)
	{
		str_cpy++;
	}
	space = malloc(sizeof(char) * (i + 1));

	if (space == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		space[i] = str[i];
	space[i] = '\0';
	return (space);
}
