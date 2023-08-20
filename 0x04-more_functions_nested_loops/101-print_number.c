#include "main.h"

/**
 * print_numbers - Entry point
 *
 * @n: input
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_numbers(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -1 * n;
		putchar('-');
	}
	else
		num = n;
	if (num >= 1e9)
	{
		int x = num % 10000000000;

		x /= 1000000000;
		num %= 1000000000;
		putchar('0' + x);
	}
	int flag = 0;

	for (unsigned int i = 1000000000; i > 10;)
	{
		if (num * 10 >= i || flag)
		{
			int z = num % i;

			i /= 10;
			z /= i;
			num %= i;
			putchar('0' + z);
			flag = 1;
		}
		else
			i /= 10;
	}
	putchar('0' + num % 10);
	_putchar('\n');
}