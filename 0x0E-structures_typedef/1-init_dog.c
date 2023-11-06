#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Variable to initialize.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
