#include <stdio.h>
#include "dog.h"

/**
 *print_dog - function that prints a struct dog.
 *@d: Struct dog to print
 *
 * Date: 19/7/23
 */
void print_dog(struct dog *d)
{
	if (d == NUL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
