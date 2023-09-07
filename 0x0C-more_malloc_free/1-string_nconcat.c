#include "main.h"
/**
 * string_nconcat - concat 2 strings in heap
 * @s1: num of arg
 * @s2: num of arg
 * @n: num of arg
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	else
	{
		for (i = 0; s2[i] != '\0'; ++i)
		{
			/* code */
		}
	}
	if (n >= i)
		n = i;
	str = malloc(sizeof(*s1) + n);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; ++i)
		str[i] = s1[i];
	for (j = 0; j < n; ++j, ++i)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
