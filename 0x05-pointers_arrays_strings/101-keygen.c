#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 Always
*/

int main(void)
{
	int sum = 0;
	char ch;

	srand(time(NULL));
	while (sum <= 2645)
	{
		ch = rand() % 128;
		if (ch < 44)
			ch = 128 - ch;
		sum += ch;
		putchar(ch);
	}
	putchar(2772 - sum);
	return (0);
}
