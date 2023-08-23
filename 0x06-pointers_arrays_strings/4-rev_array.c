#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: is a pointer to arr of int
 *
 * @n: nums
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	while (n--)
	{
		if (i >= n)
			break;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		++i;
	}
}
