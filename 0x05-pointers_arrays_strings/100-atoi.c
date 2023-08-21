#include "main.h"
#include <limits.h>

/**
 * _atoi - Entry point
 *
 * @s: is a pointer
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
*/
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int cnt = 0;

	while (s[i] != '\0' && (s[i] > '9' || s[i] < '0'))
	{
		if (s[i] == '-')
		++cnt;
		++i;
	}
	while (s[i] != '\0' && s[i] <= '9' && s[i] >= '0')
	{
		num += s[i] - '0';
		if (num < (INT_MAX  / 10 + 1)
		num *= 10;
		++i;
	}
	num /= 10;
	if (cnt % 2)
		num *= -1;
	return (num);
}

