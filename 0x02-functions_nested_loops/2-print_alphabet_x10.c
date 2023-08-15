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
	int i = 0
	for (i; i<10; ++i)
	{
		char i = 'a';

		for (; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

