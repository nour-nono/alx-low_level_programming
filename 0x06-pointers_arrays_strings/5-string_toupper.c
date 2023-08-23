#include "main.h"

/**
 * string_toupper - Entry point
 *
 * @c: is a pointer to arr of int
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
		++i;
	}
	return (c);
}
