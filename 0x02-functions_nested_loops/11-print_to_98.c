#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: is a num
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int cnt = n;

	if (n > 98)
	{
		for (; cnt >= 98; --cnt)
		{
			printf("%d, ", cnt);
		}
	}
	else
	{
		for (; cnt <= 98; ++cnt)
		{
			printf("%d, ", cnt);
		}
	}
}

