#include "main.h"

/**
 * print_triangle - Entry point
 *
 * @size: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (; i < size; ++i)
		{
			int sp = size - i - 1;

			for (; j < size; ++j)
			{
				if (sp)
				{
					_putchar(' ');
					--sp;
				}
				else
					_putchar('#');
			}
			_putchar('\n');
			j = 0;
		}
	}
	else
		_putchar('\n');
}
