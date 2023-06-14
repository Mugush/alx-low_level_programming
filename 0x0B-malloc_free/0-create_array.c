#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * create_array - creates array of chars & initializes it with a specific char.
 * @size: the size of the array to create
 * @c: the character to initialize the array elements with
 *
 * Return: a pointer to the created array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return (NULL);
	}
	char *array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
	return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	array[i] = c;
	}
	return (array); 
}

int main(void)
{
	unsigned int size = 10;
	char c = 'A';

	char *array = create_array(size, c);

	if (array == NULL)
	{
	printf("Failed to create the array.\n");
	return (1);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	putchar(array[i]);
	putchar(' ');
	}
	printf('\n');

	free(array);

	return (0);
}
