#include "main.h"

/**
 * _strlen - Entry point
 *
 * @str: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
void _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
	}
	puthchar('\n');
}

