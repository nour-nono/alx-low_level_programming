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
	int sum = 0, i = 5, j = 3;

	for (; i < 1024; i += 5)
	{
		if ((i % 15) == 0)
			continue;
		sum += i;
	}
	for (; j < 1024; j += 3)
		sum += j;
	printf("%d\n", sum);
	return (0);
}
