#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; ++i)
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}

