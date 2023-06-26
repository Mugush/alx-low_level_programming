#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg_index, char_index, total_length, concat_index;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		char_index = 0;
		while (av[arg_index][char_index] != '\0')
		{
			total_length++;
			char_index++;
		}
		total_length++;
	}

	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	concat_index = 0;
	for (arg_index = 0; arg_index < ac; arg_index++)
	{
		char_index = 0;
		while (av[arg_index][char_index] != '\0')
		{
			str[concat_index] = av[arg_index][char_index];
			concat_index++;
			char_index++;
		}
		str[concat_index] = '\n';
		concat_index++;
	}
	str[concat_index] = '\0';

	return (str);
}
