#include "variadic_functions.h"
/**
 * do_char - check the code
 * @inpt: string
 */
void do_char(va_list inpt)
{
	printf("%c", (char) va_arg(inpt, int));
}
/**
 * do_string - check the code
 * @inpt: string
 */
void do_string(va_list inpt)
{
	char *s = va_arg(inpt, char *);

	switch ((int)!s)
	{
		case 1:
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
/**
 * do_integer - check the code
 * @inpt: string
 */
void do_integer(va_list inpt)
{
	printf("%d", (int) va_arg(inpt, int));
}
/**
 * do_flt - check the code
 * @inpt: string
 */
void do_flt(va_list inpt)
{
	printf("%f", (float)va_arg(inpt, double));
}
/**
 * print_all - check the code
 * @format: string
 * Return: Nothing.
 */

void print_all(const char *const format, ...)
{
	int i = 0, flag = 0;
	test ops[] = {
	{"c", do_char},
	{"s", do_string},
	{"i", do_integer},
	{"f", do_flt},
	{NULL, NULL}};
	va_list inpt;

	va_start(inpt, format);
	while (format && format[i])
	{
		int j = 0;

		while (ops[j].c)
		{
			if (ops[j].c[0] == format[i])
			{
				if (flag)
					printf(", ");
				ops[j].ptrfunc(inpt);
			}
			++j;
		}
		++flag;
		++i;
	}
	puts("");
	va_end(inpt);
}
