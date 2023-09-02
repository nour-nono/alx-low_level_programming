#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: arg counter
 * @argv: arg vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int val = 0, ans = 0;

	if (argc == 2)
	{
		if (argv[1][0] == '-')
			puts("0");
		else
		{
			val = atoi(argv[1]);
			if (val >= 25)
				ans = val / 25;
			val %= 25;
			if (val >= 10)
				ans += val / 10;
			val %= 10;
			if (val >= 5)
				ans += val / 5;
			val %= 5;
			if (val >= 2)
				ans += val / 2;
			val %= 2;
			if (val >= 1)
				ans += val;
			printf("%d\n", ans);
		}
	}
	else
	{
		puts("Error");
		return (1);
	}
	return (0);
}
