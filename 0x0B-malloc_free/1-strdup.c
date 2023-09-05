#include "main.h"
/**
 * _strdup -  creates an array of chars, and initializes it with a specific char
 * @str: string
 *
 * Return: string.
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *ch;

	while (str[i] != '\0')
		++i;

	ch = (char *) malloc(i * sizeof(char));
	if (ch == NULL)
		return NULL;
	while (j <= i)
	{
		ch[j] = str[j];
		++j;
	}
	return (ch);
}
