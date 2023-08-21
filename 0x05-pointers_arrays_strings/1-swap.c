#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: is a pointer
 *
 * @b: another pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

