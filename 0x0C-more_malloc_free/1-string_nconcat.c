#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @str1: First string.
 * @str2: Second string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *concat_str;

	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";

	len1 = 0;
	len2 = 0;

	while (str1[len1] != '\0')
		len1++;
	while (str2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat_str = malloc(sizeof(char) * (n + len1 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = str1[i];

	for (i = 0; i < n; i++)
		concat_str[i + len1] = str2[i];

	concat_str[i + len1] = '\0';

	return (concat_str);
}
