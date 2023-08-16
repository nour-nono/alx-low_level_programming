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
	long int tmp = 0, i = 1, j = 2, sum = 2;

	for (; j <= 4000000; )
	{
		tmp = j;
		j += i;
		i = tmp;
		if (j % 2 == 0)
			sum += j;
	}
	printf("%ld\n", sum);
	return (0);
}
