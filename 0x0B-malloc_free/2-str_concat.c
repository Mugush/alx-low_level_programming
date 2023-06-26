#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 *
 * Return: concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int k, co;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	k = co = 0;
	while (s1[k] != '\0')
		k++;

	while (s2[co] != '\0')
		co++;

	concat = malloc(sizeof(char) * (k + co + 1));

	if (concat == NULL)
		return (NULL);

	k = co = 0;
	while (s1[k] != '\0')
	{
		concat[k] = s1[k];
		k++;
	}

	while (s2[co] != '\0')
	{
		concat[k] = s2[co];
		k++, co++;
	}

	concat[k] = '\0';

	return (concat);
}
