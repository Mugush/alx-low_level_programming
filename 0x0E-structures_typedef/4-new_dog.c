#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog and stores a copy of its name and owner.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog_t structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_length = strlen(name);
	size_t owner_length = strlen(owner);

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return NULL;

	new_dog->name = (char *)malloc((name_length + 1) * sizeof(char));
	if (new_dog->name == NULL) {
	free(new_dog);
	return NULL;
}
	strcpy(new_dog->name, name);

	new_dog->owner = (char *)malloc((owner_length + 1) * sizeof(char));
	if (new_dog->owner == NULL) {
	free(new_dog->name);
	free(new_dog);
	return NULL;
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return new_dog;
}
