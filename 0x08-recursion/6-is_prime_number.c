#include "main.h"
/**
 * is_prime_number - check the code
 * @n: num
 * Return: true and false
 */
int is_prime_number(int n)
{
	int i = 3;

	if (n == 2)
		return (1);
	else if (n == 3)
		return (1);
	else if (n < 2 || n % 2 == 0)
		return (0);
	for (; i * i < n; i += 2)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
