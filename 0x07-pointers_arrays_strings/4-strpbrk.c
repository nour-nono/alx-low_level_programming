#include "main.h"
/**
 * _strpbrk - Find first occurrence of a specific character
 *
 * @s: string
 * @accept: the string that we looking for
 *
 * Return: the pos of the character.
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0, ans = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
			++j;
		if (accept[j] == s[i])
			return (&s[i]);
		++i;
	}
	return ('\0');
}
