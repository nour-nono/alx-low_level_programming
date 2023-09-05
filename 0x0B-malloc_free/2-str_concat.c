#include "main.h"

/**
 * str_concat - concat 2 strings in heap
 * @s1: string
 * @s2: string
 * Return: string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *ch;

	while (s1[i] != '\0')
		++i;

	while (s2[j] != '\0')
		++j;
	i = 0, j = 0;
	ch = (char *) malloc((i + j + 2) * sizeof(char));
	if (ch == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ch[i] = s1[i];
		++i;
	}
	while (s2[j] != '\0')
	{
		ch[i] = s2[j];
		++i, ++j;
	}
	return (ch);
}
