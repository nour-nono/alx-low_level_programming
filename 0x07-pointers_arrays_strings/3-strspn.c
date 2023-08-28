#include "main.h"

/**
 * _strchr - Find first occurrence of a specific character
 *
 * @s: string
 * @c: the char that we looking for
 *
 * Return: the pos of the character.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != '\0') 
		++i;
	return (s + i);
}