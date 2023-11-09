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
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != '\0')
		++i;
	return (i);
}

