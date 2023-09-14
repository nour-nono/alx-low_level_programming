#include "3-calc.h"
/**
 * get_op_func - pointer to a fun
 * @s: first operand
 *
 * Return: another func.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (s != NULL && !s[1] && s[0] == *ops[i].op)
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
