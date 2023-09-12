#include"dog.h"
#include <stdlib.h>

/**
 * new_dog - just a function
 *
 * @name: struct
 * @age: num
 * @owner: string
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i = 0, j = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != '\0')
		++i;
	while (owner[j] != '\0')
		++j;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(i + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(j + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age, i = 0;
	while (name[i] != '\0')
	{
		dog->name[i] = name[i];
		++i;
	}
	dog->name[i] = '\0';
	j = 0;
	while (owner[j] != '\0')
	{
		dog->owner[j] = owner[j];
		++j;
	}
	dog->owner[j] = '\0';
	return (dog);
}
