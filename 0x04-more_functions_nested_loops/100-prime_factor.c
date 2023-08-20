#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: this program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int i = sqrt(612852475143), ans = 0;

	if (i % 2 == 0)
		++i;
	for (; i > 2 ; i += 2)
	{
		if (612852475143 % i == 0)
		{
			ans = i;
			break;
		}
	}
	printf("%ld\n", ans);
	return (0);
}
