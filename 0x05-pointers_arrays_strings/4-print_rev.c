#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		++i;
	}
	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

