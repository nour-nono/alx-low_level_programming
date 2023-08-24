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

	for (; j < 97; ++j)
	{
		int tmp1 = b1;
		int tmp2 = b2;
		int tmp3 = b3;

		a1 = tmp1;
		b1 += a1;
		b2 += a2;
		a2 = tmp2;
		b3 += a3;
		a3 = tmp3;
		if (b1 >= 1e8)
		{
			b2 += b1 / 10000000;
			b1 %= 10000000;
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
			printf("%d, ", b1);
	}
	return (0);
}
