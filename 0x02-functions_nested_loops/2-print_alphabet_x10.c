#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int j = 0;

	for (; j < 10; ++j)
	{
		char i = 'a';

		for (; i <= 'z'; ++i)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

