#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0, m, o;

	while (n <= 9)
	{
		m = n + 1;
		while (m <= 9)
		{
			o = m + 1;
			while (o <= 9)
			{
				putchar('0' + n);
				putchar('0' + m);
				putchar('0' + o);
				putchar(',');
				putchar(' ');
				++o;
			}
			++m;
		}
		++n;
	}
	putchar('\n');
	return (0);
}
