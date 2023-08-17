#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this program prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 1;

	for (; i <= 100; ++i)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		else
			printf("%d", i);
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
