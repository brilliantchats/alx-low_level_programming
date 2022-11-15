#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initialise variable of type struct dog
 * @d: the struct dog variable pointer
 * @name: the name of the dog
 * @age: the age
 * @owner: the owner
 *
 * Description: initialise struct dog passed to the function
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
