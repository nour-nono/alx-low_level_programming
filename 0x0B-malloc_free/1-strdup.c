#include "main.h"

/**
 * _strdup - copy string in heap
 * @str: string
 *
 * Return: string.
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ch;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		++i;
	ch = (char *) malloc((i + 1) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	while (j <= i)
	{
		ch[j] = str[j];
		++j;
	}
	return (ch);
}
