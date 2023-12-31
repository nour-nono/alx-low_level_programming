#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct test - just struct
 *
 * @c: a char
 * @ptrfunc: function
*/
struct test
{
	char *c;
	void (*ptrfunc)(va_list);
};
typedef struct test test;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
