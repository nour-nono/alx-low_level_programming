#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: string
 * @n: num of arg
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n)
	{
		unsigned int i = 0;
		va_list args;

		va_start(args, n);
		for (; i < n - 1; ++i)
		{
			char *s = va_arg(args, char *);

			if (s)
				printf("%s", s);
			else
				printf("(nil)");
			if (separator)
				printf("%s", separator);
		}
		if (va_arg(args, char *))
			printf("%s\n", va_arg(args, char *));
		else
			puts("(nil)");
		va_end(args);
	}
	else
		puts("");
}
