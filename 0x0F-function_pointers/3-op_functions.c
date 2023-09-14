#include "calc.h"
/**
 * op_add - add a to b
 * @a: first operand
 * @b: second operand
 *
 * Return: the sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - add a to b
 * @a: first operand
 * @b: second operand
 *
 * Return: the sub.
 */
int op_sub(int a, int b)
{
	return ((a > b) ? a - b : b - a);
}
/**
 * op_mul - add a to b
 * @a: first operand
 * @b: second operand
 *
 * Return: the mul.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - add a to b
 * @a: first operand
 * @b: second operand
 *
 * Return: the div.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - add a to b
 * @a: first operand
 * @b: second operand
 *
 * Return: the mod.
 */
int op_mod(int a, int b)
{
	return (a - ((a / b) * b));
}
