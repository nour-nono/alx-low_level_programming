#include "main.h"

/**
 * _strstr - Find first occurrence of a specific character
 *
 * @haystack: string
 * @needle: the string that we looking for
 *
 * Return: the pos of the character.
*/

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		int z = i, j = 0;

		if (needle[j] == haystack[z])
			while (needle[j] != '\0' && haystack[j] != '\0' && needle[j] == haystack[z])
				++z, ++j;
		if (needle[j] == '\0')
			return (&haystack[i]);
		++i;
	}
	return ('\0');
}
