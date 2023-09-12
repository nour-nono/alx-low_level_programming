#include "dog.h"
/**
* print_dog - just a function
* @d: struct
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		if (d->age)
			printf("Age: %f\n", d->age);
		if (d->name)
			printf("Owner: %s\n", d->owner);
	}
}
