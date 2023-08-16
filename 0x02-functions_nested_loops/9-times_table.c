#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void times_table(void)
{
	int hour = 0, min = 1;

	for (; hour < 10; hour++)
	{
		_putchar('0');
		for (; min < 10; min++)
		{
			int z = hour * min;

			_putchar(',');
			_putchar(' ');
			if (z > 10)
				_putchar('0' + z / 10);
			else
				_putchar(' ');
			_putchar('0' + min % 10);
		}
		_putchar('\n');
		min = 1;
	}
}

