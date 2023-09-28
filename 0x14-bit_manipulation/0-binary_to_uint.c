#include "main.h"
/**
 *  _strlen - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		++i;
	return (i);
}

/**
 * binary_to_uint - check the code
 * @b: pointer to pointer
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;

	if (!b)
		return (0);
	for (; *b;)
	{
		if (b[x] == '1')
			ans = ans * 2 + 1;
		else if (b[x] != '0')
			return (0);
	}
	return (ans);
}
