#include "main.h"

/**
 * print_array - Entry point
 *
 * @a: is a pointer to arr of int
 *
 * @n: nums
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	int i = 0;

	while(n > 0 && i < n)
	{
		for (; i < n - 1; i++)
			printf("%d, ", a[i]);
		printf("%d\n", a[i]);
		++i;
	}
}
