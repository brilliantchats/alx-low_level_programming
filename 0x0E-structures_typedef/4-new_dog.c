#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Owner of this dog
 *
 * Return: new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *new_dog_pointer;

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
	new_dog_pointer = &new_dog;
	return (new_dog_pointer);
}
