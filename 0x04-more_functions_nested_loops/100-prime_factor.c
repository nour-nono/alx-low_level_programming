#include <stdio.h>

/**
 * isprime - for prime nums
 *
 * @n: num
 *
 * Return: true for prime nums and false for other
*/

bool isprime(long long int n)
{
	if (n == 2)
		return (true);
	else if (n == 1 || n % 2 == 0)
		return (false);
	for (int i = 3; i * i <= n; i += 2)
		if (n % i == 0)
			return (false);
	return (true);
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
	long long int i = 612852475143, ans = 0;

	for (; i > 2 ; i -= 2)
	{
		if (isprime(i))
		{
			ans = i;
			break;
		}
	}
	printf("%d\n", ans);
	return (0);
}
