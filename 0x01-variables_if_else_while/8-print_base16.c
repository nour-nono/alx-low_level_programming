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
	int n = 0;

	while (n <= 9)
	{
		putchar('0' + n);
		++n;
	}
	n = 0;
	while (n <= 5)
	{
		putchar('a' + n);
		++n;
	}
	putchar('\n');
	return (0);
}
