#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		++i;
	}
	i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		++i;
	}
}
