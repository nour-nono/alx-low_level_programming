#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints character
 *
 * @c: the character to printed
 *
 * Description: this program prints "_putchar"
 *
 * Return: 1 on (Success)
 * and return -1 on error
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
