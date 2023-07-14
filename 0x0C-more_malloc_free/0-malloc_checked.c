#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Malloc_checked - Allocates memory using malloc.
 * Description - A function that allocates memory using malloc.
 *@b - size of the memory block to allocate.
 *Return: a pointer to allocated memory block.
 *Exit with status value 98 if malloc fails.
 *Date: 7/13/23
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
