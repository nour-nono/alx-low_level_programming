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
	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
