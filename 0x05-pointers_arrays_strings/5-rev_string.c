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

	while (s[i] != '\0')
		++i;

	const int y = i;
	char tmp[y];
	char tmp[i + 1];

	i = 0;
	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		++i;
	}
	while (i--)
		s[y - 1 - i] = tmp[i];
}

