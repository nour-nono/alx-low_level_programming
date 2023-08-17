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
	int i = 0;
	char output[] = "_putchar";

	while (i < 8)
	{
		_putchar(output[i]);
		++i;
	}
	_putchar('\n');
	return (0);
}
