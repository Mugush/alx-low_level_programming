#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - print a name
 *@name: name to print
 *@f: pointer to the printing function that takes a char pointer as an argument
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
