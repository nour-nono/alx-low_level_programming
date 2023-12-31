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
	unsigned int i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else
	{
		for (j = 0; s1[j] != '\0'; ++j)
		{
			/* code */
		}
	}
	if (s2 == NULL)
		s2 = "";
	else
	{
		for (i = 0; s2[i] != '\0'; ++i)
		{
			/* code */
		}
	}
	str = malloc(j + n + 1);
	if (n >= i)
		n = i;
	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; ++i)
			str[i] = s1[i];
	if (s2 != NULL)
		for (j = 0; j < n; ++j)
		{
			str[i] = s2[j];
			++i;
		}
	str[i] = '\0';
	return (str);
}
