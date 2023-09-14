#include "3-calc.h"
/**
 * main - check the code
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int (*do_job)(int, int) = get_op_func(argv[2]);
	int a = atoi(argv[1]), b = atoi(argv[3])

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (do_job == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", do_job(a, b));
	return (0);
}
