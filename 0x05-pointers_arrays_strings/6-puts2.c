#include "main.h"

/**
 * _puts - Entry point
 *
 * @str: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		++i;
	}
	putchar('\n');
}

