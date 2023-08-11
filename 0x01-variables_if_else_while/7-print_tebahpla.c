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
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		--n;
	}
	putchar('\n');
	return (0);
}
