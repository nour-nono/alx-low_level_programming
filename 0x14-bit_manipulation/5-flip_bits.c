#include "main.h"
/**
 * flip_bits - check the code
 * @n: num
 * @m: num
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ans1 = (n ^ m);
	int ans2 = 0, i = 0;

	for (; i < 64; i++)
		if ((ans1 >> i) & 1)
			++ans2;
	return (ans2);
}
