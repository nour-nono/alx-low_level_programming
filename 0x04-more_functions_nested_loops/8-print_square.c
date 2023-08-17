#include "main.h"

/**
 * print_square - Entry point
 *
 * @size: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (; i < size; ++i)
		{
			for (; j < size; ++j)
				_putchar('#');
			_putchar('\n');
			j = 0;
		}
	}
	else
		_putchar('\n');
}
