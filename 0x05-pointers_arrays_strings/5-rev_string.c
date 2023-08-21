#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	int i = 0;
	int y = 0;
	int x = 0;
	char tmp;

	while (s[i] != '\0')
		++i;
	--i;
	y = i / 2;
	while (y)
	{
		tmp = s[i];
		s[i] = s[x];
		s[x] = tmp;
		--i;
		++x;
		--y;
	}
	while (i--)
		s[y - 1 - i] = tmp[i];
}

