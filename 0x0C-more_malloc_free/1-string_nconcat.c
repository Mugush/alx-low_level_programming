#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, len1, len2;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat_str = malloc(sizeof(char) * (n + len1 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
		concat_str[j] = s1[j];

	for (j = 0; j < n; j++)
		concat_str[j + len1] = s2[j];

	concat_str[j + len1] = '\0';

	return (concat_str);
}
