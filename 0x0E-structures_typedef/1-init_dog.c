#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize
 * @name: Name of dog to initialize
 * @age: Age of the dog to intialiaze
 * @owner: Owner of dog to intitalize
 * Description: This function initializes the values of the struct dog
 *              pointed to by 'd' with the provided 'name', 'age', and 'owner'
 * Date: 19/7/23
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
