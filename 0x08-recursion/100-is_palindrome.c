#include "main.h"
/**
 * len - check the code
 * @s: string
 * Return: string length
 */
int len(char *s)
{
	int sum = 0;

	if (*s != '\0')
		sum = len(s + 1) + 1;
	else
		return (sum);
}

/**
 * pal - check the code
 * @s: string
 * @length: string length
 * @ans: answer
 * @i: iterator
 * Return: true and false
 */

int pal(char *s, int length, int ans, int i)
{
	if (i <= length / 2)
	{
		if (*(s + i) != *(s + length - i - 1))
		{
			ans = 0;
			return (ans);
		}
		else
			return (pal(s, length, 1, i + 1));
	}
	else
		return (ans);
}

/**
 * is_palindrome - check the code
 * @s: string
 * Return: true and false
 */

int is_palindrome(char *s)
{
	int length = len(s);

	return (pal(s, length, 1, 0));
}
