#include "main.h"
/**
 * clear_bit - check the code
 * @n: num
 * @index: num
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = 63;

	if (index > size)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
