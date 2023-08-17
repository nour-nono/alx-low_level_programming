#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void more_numbers(void)
{
	int j = 0;

	for (; j < 10; ++j)
	{
		int i = 0;

		for (; i <= 14; ++i)
		{
			if (i > 9)
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			else
				_putchar(i);
		}
		_putchar('\n');
	}
}

