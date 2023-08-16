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
	long long int tmp = 0, i = 1, j = 2, n = 0;

	printf("%lld, %lld, ", i, j);
	for (; n < 50; ++n)
	{
		tmp = j;
		j += i;
		i = tmp;
		printf("%lld, ", j);
	}
	printf("%lld\n", j);
	return (0);
}
