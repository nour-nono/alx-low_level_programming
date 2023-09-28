#include "main.h"
/**
 * print_binary - check the code
 * @n: num
 * Return: Nothing
*/
void print_binary(unsigned long int n)
{
	int size, i;

	if (!n)
		putchar('0');
	else
	{
		size = 0, i = 0;
		for (; i < 64; ++i)
			if ((n >> i) & 1)
				size = i;
		for (; size >= 0; --size)
		{
			if ((n >> size) & 1)
				putchar('1');
			else
				putchar('0');
		}
	}
}
