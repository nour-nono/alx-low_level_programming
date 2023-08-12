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
	int n = 0, m = 0, x = 0, y = 0;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			x = 0;
			while (x <= 9)
			{
				y = 0;
				while (y <= 9)
				{
					if (n > x)
					{
						++y;
						continue;
					}
					if(n == x && m >= y)
					{
						++y;
						continue;
					}
					putchar('0' + n);
					putchar('0' + m);
					putchar(' ');
					putchar('0' + x);
					putchar('0' + y);
					if (n == 9 && m == 8)
						break;
					putchar(',');
					putchar(' ');
					++y;
				}
				++x;
			}
			++m;
		}
		++n;
	}
	putchar('\n');
	return (0);
}
