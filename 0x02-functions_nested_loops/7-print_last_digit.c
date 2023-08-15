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

	if (n > 0)
		z = n % 10;
	else
		z = -n % 10;
	_putchar('0'+z);
	return (z);
}

