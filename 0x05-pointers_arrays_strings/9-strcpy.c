#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest: is a pointer to arr of int
 *
 * @src: nums
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = src[j];
	return (dest);
}
