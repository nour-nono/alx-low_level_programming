#include "main.h"
/**
 * malloc_checked - concat 2 strings in heap
 *
 * @b: num of arg
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)

		exit(98);
	else
		return (m);
}
