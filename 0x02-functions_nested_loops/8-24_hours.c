#include "main.h"

/**
 *  jack_bauer - Entry point
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
void jack_bauer(void)
{
	for (int hour = 0; hour < 24; ++hour)
	{
		for (int min = 0; min < 60; ++min)
		{
			_putchar('0' + hour / 10);
			_putchar('0' + hour % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
		}
		putchar('\n');
	}
}

