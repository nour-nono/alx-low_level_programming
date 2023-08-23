#include "main.h"

/**
 * cap_string - Entry point
 *
 * @c: is a pointer to arr of int
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
char *cap_string(char *c)
{
	int i = 0;
	int flag = 1;

	while (c[i] != '\0')
	{
		if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
		{
			if (c[i] >= 'a' && c[i] <= 'z' && flag)
				c[i] = c[i] - 32;
			flag = 0;
		}
		else
			flag = 1;
		++i;
	}
	return (c);
}
