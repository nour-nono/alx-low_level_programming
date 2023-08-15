#include "main.h"

/**
 * main - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i = 'a';

	for (; i <= 'z'; ++i)
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
	return (0);
}
