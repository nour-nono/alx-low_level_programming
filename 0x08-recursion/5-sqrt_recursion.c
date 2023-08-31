#include "main.h"
/**
 * ppr - check the code
 * @n: num
 * @i: for loop
 * Return: true and false
 */
int ppr(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i * i < n)
		return (ppr(n, i + 1));
	return (-1);
}
/**
 * _sqrt_recursion - check the code
 * @n: num
 * Return: true and false
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (ppr(n, 2));
}
