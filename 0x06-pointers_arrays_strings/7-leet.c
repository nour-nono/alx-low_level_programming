#include "main.h"

/**
 * leet - Entry point
 *
 * @c: is a pointer to arr of int
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
char *leet(char *c)
{
	int i = 0;
	int j = 0;

	while (c[i] != '\0')
	{
		while (lett[j] != '\0')
		{
			if (c[i] == lett[j] || c[i] == (lett[j] + 32))
			{
				c[i] = code[j];
				break;
			}
			++j;
		}
		j = 0;
		++i;
	}
	return (c);
}
