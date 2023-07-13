#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *Description - A function that allocates memory using malloc.
 *@ptr - Returns a pointer to the allocated memory
 *Return: 0 on success 98 if fails
 *Date: 7/13/23
 */
void *malloc_checked(unsigned int b)
{
    void* ptr = malloc(b);
    if (ptr == NULL) {
	_putchar(stderr\n")
	exit(98);}

    return ptr;
}

 

