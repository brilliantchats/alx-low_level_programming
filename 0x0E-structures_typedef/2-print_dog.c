#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Prints a struct dog
 * @d: the struct dog
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? nil : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? nil : d->owner));
	}
}
