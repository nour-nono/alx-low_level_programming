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
	long int tmp = 0, i = 1, j = 2, n = 0;

	printf("%ld, %ld, ", i, j);
	for (; n < 47; ++n)
	{
		tmp = j;
		j += i;
		i = tmp;
		printf("%ld, ", j);
	}
	j += i;
	printf("%ld\n", j);
	return (0);
}
