#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new struct named dog
 * @name: Name of the Dog object
 * @age: Age of the object
 * @owner: Owner of the object
 *
 * Description: Struct defining a new type dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
