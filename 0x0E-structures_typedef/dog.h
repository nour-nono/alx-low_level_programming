#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - define dog
 *
 * @name: string
 * @age: float
 * @owner: string
 * Description: it's dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
