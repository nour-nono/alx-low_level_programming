#include "main.h"

/**
 * print_line - Entry point
 *
 * @n: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_line(int n)
{
	int i = 0;

	if (i > 0)
	for (; i < n ; ++i)
		_putchar('_');
	_putchar('\n');
}
