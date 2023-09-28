#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: pointer to pointer
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int x = strlen(b);
	unsigned int ans = 0, i = 0;

	--x;
	for (; x >= 0; --x, ++i)
	{
		if (b[x] == '1')
			ans += (1 << i);
		else if (b[x] != '0')
			return (0);
	}
	return (ans);
}
