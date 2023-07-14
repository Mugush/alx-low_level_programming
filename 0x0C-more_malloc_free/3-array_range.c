#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to newly created array, or NULL if min > max or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *gush_array;
	int size;
	int j;

	if (min > max)
		return (NULL);

	size = 0;
	for (j = min; j <= max; j++;)
			size++

	gush_array = malloc(sizeof(int) * size);

	if (gush_array == NULL)
		return (NULL);
	
	for (j = 0; j < size; j++)
		gush_array[j] = min;
			j++;

	return (gush_array);
}
