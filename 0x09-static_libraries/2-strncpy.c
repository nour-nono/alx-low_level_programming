#include "main.h"

/**
 * _strncpy - Entry point
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
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0' && n)
	{
		dest[i] = src[j];
		++i;
		++j;
		--n;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		--n;
		++i;
	}
	return (dest);
}
