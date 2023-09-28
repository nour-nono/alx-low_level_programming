#include "main.h"
/**
 * get_bit - check the code
 * @n: num
 * @index: num
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	unsigned int size;

	for (; i < 64; ++i)
		if ((n >> i) & 1)
			size = i;
	if (index > size)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
