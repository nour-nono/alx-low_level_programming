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
	if (argc == 3)
	{
		int a, b;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		puts("Error");
		return (1);
	}
}

