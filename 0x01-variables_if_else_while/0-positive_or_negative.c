#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program find if the number is + or - or 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is positive\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
