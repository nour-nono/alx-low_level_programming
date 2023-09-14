#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: num of arg
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (; i < n; ++i)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
