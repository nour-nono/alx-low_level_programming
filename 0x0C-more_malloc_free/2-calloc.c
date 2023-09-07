#include "main.h"
/**
 * _calloc - concat 2 strings in heap
 * @nmemb: num of arg
 * @size: num of arg
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cll;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cll = malloc(nmemb * size);
	if (cll == NULL)
		return (NULL);
	ptr = cll;
	for (i = 0; i < nmemb * size; i++)
		*ptr++ = 0;
	return (cll);
}
