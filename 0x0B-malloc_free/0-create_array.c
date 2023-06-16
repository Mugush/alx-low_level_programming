#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char.
 * @size: the size of the array to create
 * @c: the character to initialize the array elements with
 *
 * Return: a pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}
	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
