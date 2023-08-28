#include "main.h"

/**
 * _memset - filling array or string
 * @s: string
 * @b: repeated char
 * @n: num of bytes
 * Return: Nothing.
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}
	return (s);
}
