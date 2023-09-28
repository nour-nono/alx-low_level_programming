#include "main.h"
/**
 * get_bit - check the code
 * @n: num
 * @index: num
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int size = 0, i = 0;

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
