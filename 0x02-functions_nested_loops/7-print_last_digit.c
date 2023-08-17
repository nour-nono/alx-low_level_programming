#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @n: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int print_last_digit(int n)
{
	int z;

	z = n % 10;
	if (z < 0)
		z = -1 * z;
	_putchar('0' + z);
	return (z);
}

