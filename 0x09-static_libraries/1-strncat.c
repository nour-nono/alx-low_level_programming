#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: is a pointer to arr of int
 *
 * @src: nums
 *
 * @n: a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		++i;
	while (src[j] != '\0' && n--)
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = '\0';
	return (dest);
}
