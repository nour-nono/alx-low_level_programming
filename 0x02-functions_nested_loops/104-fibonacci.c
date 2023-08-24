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
	long int a1 = 1, b1 = 2, a2 = 0, b2 = 0;
	long int a3 = 0, b3 = 0, j = 0;

	printf("%ld, %ld, ", a1, b1);
	for (; j < 97; ++j)
	{
		long int tmp1 = b1, tmp2 = b2, tmp3 = b3;

		b1 += a1;
		a1 = tmp1;
		b2 += a2;
		a2 = tmp2;
		b3 += a3;
		a3 = tmp3;
		if (b1 >= 1e9)
		{
			b2 += b1 / 1000000000;
			b1 %= 1000000000;
		}
		if (b2 >= 1e8)
		{
			b3 += b2 / 10000000;
			b2 %= 10000000;
		}
		if (b3)
		{
			if (j < 96)
				printf("%ld%ld%ld, ", b3, b2, b1);
			else
				printf("%ld%ld%ld", b3, b2, b1);
		}
		else if (b2)
			printf("%ld%ld, ", b2, b1);
		else
			printf("%ld, ", b1);
	}
	printf("\n");
	return (0);
}
