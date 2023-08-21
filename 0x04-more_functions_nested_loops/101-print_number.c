#include "main.h"

/**
 * print_number - Entry point
 *
 * @n: input
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_number(int n)
{
	unsigned int num = 0;
	unsigned int i = 1000000000;
	int flag = 0;

	if (n < 0)
	{
		num = -1 * n;
		_putchar('-');
	}
	else
		num = n;
	if (num >= 1e9)
	{
		int x = num % 10000000000;

		x /= 1000000000;
		num %= 1000000000;
		_putchar('0' + x);
	}

	while (i > 10)
	{
		if (num >= (i / 10) || flag)
		{
			int z = num % i;

			i /= 10;
			z /= i;
			num %= i;
			_putchar('0' + z);
			flag = 1;
		}
		else
			i /= 10;
	}
	_putchar('0' + num % 10);
	_putchar('\n');
}
