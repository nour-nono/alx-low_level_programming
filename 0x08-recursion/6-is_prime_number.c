#include "main.h"
/**
 * ppr - check the code
 * @n: num
 * @i: for loop
 * Return: true and false
 */
int ppr(int n, int i)
{
	if (i * i <= n)
		if (n % i == 0)
			return (0);
		else
			return (ppr(n, i + 2));
	return (1);
}
/**
 * is_prime_number - check the code
 * @n: num
 * Return: true and false
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n == 3)
		return (1);
	else if (n < 2 || n % 2 == 0)
		return (0);
	return (ppr(n, 3));
}
