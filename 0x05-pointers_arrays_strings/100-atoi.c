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
	unsigned int num = 0;
	int cnt = 0;
	int flag = 0;

	while (s[i] != '\0' && (s[i] > '9' || s[i] < '0'))
	{
		if (s[i] == '-')
		++cnt;
		++i;
	}
	while (s[i] != '\0' && s[i] <= '9' && s[i] >= '0')
	{
		num += s[i] - '0';
		flag = 0;
		if (num < (INT_MAX  / 10 + 2))
		{
			num *= 10;
			flag = 1;
		}
		++i;
	}
	if (flag)
		num /= 10;
	if (cnt % 2)
		return (-num);
	else
		return (num);
}

