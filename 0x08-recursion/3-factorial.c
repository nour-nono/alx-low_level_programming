#include "main.h"
/**
 * factorial - check the code
 * @n: num
 * Return: num factorial
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
}
