#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print characters
 *
 * @a: arr
 * @size: arr size
 *
 * Return: the pos of the character.
*/

void print_diagsums(int *a, int size)
{
	int i = 0, i2 = size - 1, sum1 = 0, sum2 = 0;

	while (i != size)
	{
		sum1 += a[i];
		sum2 += a[i2];
		++i, --i2;
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
