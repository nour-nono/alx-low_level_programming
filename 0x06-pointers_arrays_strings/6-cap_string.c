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
	int j = 0;
	int flag = 1;
	char deli[] = " \n\t,;.!?\"(){}";

	while (c[i] != '\0')
	{
		if (j == 0)
		{
			for (; j <= 12; ++j)
			{
				if (c[i] == deli[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (j > 12)
		{
			if (c[i] >= 'a' && c[i] <= 'z' && flag)
				c[i] = c[i] - 32;
			flag = 0;
		}
		j = 0;
		++i;
	}
	return (c);
}
