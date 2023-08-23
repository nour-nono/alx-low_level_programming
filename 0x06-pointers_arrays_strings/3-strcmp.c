#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: is a pointer to arr of int
 *
 * @s2: nums
 *
 * Description: this program prints "_putchar"
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int ans = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			ans = (*s1 - '0') - (*s2 - '0');
			break;
		}
		++s1;
		++s2;
	}
	return (ans);
}
