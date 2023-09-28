#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: pointer to pointer
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int ans = 0, i = 0;

	if (b == NULL)
		return (0);
	x = strlen(b) - 1;
	for (; x >= 0; --x, ++i)
	{
		if (b[x] == '1')
			ans += (1 << i);
		else if (b[x] != '0')
			return (0);
	}
	return (ans);
}
