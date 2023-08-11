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
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
		++n;
	}
	putchar('\n');
	return (0);
}
