#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_times_table(int n)
{
	if (n >= 0 && n < 16)
	{
		int hour = 0, min = 1;

		for (; hour <= n; ++hour)
		{
			_putchar('0');
			for (; min <= n; ++min)
			{
				int z = hour * min;

				_putchar(',');
				_putchar(' ');
				if (z >= 100)
                                        _putchar('0' + (z / 100));
                                else
                                        _putchar(' ');
				if (z >= 10)
					_putchar('0' + (z / 10));
				else
					_putchar(' ');
				_putchar('0' + (z % 10));
			}
			_putchar('\n');
			min = 1;
		}
	}
}
