#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_numbers(void)
{
	char i = '0';

	for (; i <= '9'; ++i)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}

