#include "dog.h"

/**
 * init_dog - just a function
 * 
 * @d: struct
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: void
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
