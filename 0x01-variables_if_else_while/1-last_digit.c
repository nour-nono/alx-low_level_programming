#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program find if the number is greater than 5 or not if its
 * 0 or not
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n < 0)
	{
		printf("%d and is less than 6 and not 0\n", n % 10);
	} else
	{
		if (n % 10 == 0)
			printf("%d and is 0\n", n % 10);
		else if (n % 10 > 5)
			printf("%d and is greater than 5\n", n % 10);
		else if (n % 10 < 6)
			printf("%d and is less than 6 and not 0\n", n % 10);
	}
	return (0);
}
