#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * @n: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; ++i)
		{
			int a = n - i;

			while (a < n)
			{
				putchar(' ');
				++a;
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
