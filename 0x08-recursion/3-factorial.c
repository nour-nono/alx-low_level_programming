#include "main.h"
/**
 * factorial - check the code
 * @n: num
 * Return: num factorial
 */
int factorial(int n)
{
	int sum = 1;

	if (n > 0)
		sum = n * factorial(n - 1);
	else if (n == 0)
		sum = 1;
	else if (n < 0)
		sum = -1;
	return (sum);
}
