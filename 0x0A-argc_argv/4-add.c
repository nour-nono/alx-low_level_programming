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
	int val = 0;

	if (argc == 0)
	{
		puts("0");
	}
	else
	{
		int i = 1;

		for (; i < argc; ++i)
		{
			char *s = argv[i];

			while (*s != '\0')
			{
				if (*s > '9' || *s < '0')
				{
					puts("Error");
					return (1);
				}
				++s;
			}
			val += atoi(argv[i]);
		}
	}
	printf("%d", val);
	return (0);
}


