#include "main.h"
/**
 * get_bit - check the code
 * @n: num
 * @index: num
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = 63;

	if (index > size)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
