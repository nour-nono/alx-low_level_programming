#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: the size of the memory to print
 * @c: char
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ch = (char *) malloc(size * sizeof(char));
	if (ch == NULL)
		return (NULL);
	while (i < size)
	{
		ch[i] = c;
		++i;
	}
	return (ch);
}
