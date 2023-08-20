#include <stdio.h>

/**
 * isprime - for prime nums
 *
 * @n: num
 *
 * Return: true for prime nums and false for other
*/

int isprime(long int n)
{
	if (n == 2)
		return (1);
	else if (n == 1 || n % 2 == 0)
		return (0);
	int z = 3;
	for (; z * z <= n; z += 2)
		if (n % z == 0)
			return (0);
	return (1);
}

/**
 * main - Entry point
 *
 * Description: this program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int i = 612852475143, ans = 0;

	for (; i > 2 ; i -= 2)
	{
		if (isprime(i))
		{
			ans = i;
			break;
		}
	}
	printf("%ld\n", ans);
	return (0);
}
