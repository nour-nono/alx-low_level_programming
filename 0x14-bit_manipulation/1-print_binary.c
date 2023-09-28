#include "main.h"

/**
 * print_binary - check the code
 * @n: num
 * Return: Nothing
*/

void print_binary(unsigned long int n)
{
    int size;
    if (!n)
        putchar('0');
    else
    {
        size = log2f(n);
        for (; n != 0 && size >= 0; --size)
        {
            if ((n >> size) & 1)
                putchar('1');
            else
                putchar('0');
        }
    }
}
