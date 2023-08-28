#include <stdio.h>

/**
 * _memset - filling array or string
 * @dest: string
 * @src: repeated char
 * @n: num of bytes
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
		dest[i] = src[i];
		++i;
	}
	return (dest);
}
