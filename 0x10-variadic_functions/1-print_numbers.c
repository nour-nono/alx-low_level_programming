#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: string
 * @n: num of arg
 * Return: Nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n)
	{
		unsigned int i = 0;
		va_list args;

		va_start(args, n);
		for (; i < n - 1; ++i)
		{
			printf("%d%s", va_arg(args, int), separator);
		}
		printf("%d\n", va_arg(args, int));
		va_end(args);
	}
	puts("");
}
