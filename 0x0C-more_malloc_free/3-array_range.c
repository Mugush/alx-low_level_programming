#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to the new array,or NULL if min > max or if malloc fails.
 * Date:14/7/23.
 */
int *array_range(int min, int max)
{
	int *gush_array;
	int size, i, j;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	gush_array = malloc(sizeof(int) * size);

	if (gush_array == NULL)
		return (NULL);

	for (i = 0, j = min; j <= max; i++, j++)
		gush_array[i] = j;

	return (gush_array);
}
