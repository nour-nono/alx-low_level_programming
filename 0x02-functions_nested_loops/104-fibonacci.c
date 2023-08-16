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
	unsigned long int tmp = 0, i = 1, j = 2, n = 0;

	printf("%lu, %lu, ", i, j);
	for (; n < 98; ++n)
	{
		tmp = j;
		j += i;
		i = tmp;
		printf("%lu, ", j);
	}
	j += i;
	printf("%lu\n", j);
	return (0);
}
