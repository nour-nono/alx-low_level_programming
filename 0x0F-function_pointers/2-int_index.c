#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: the array
 * @size: typedef unsigned long long
 * @cmp: function pointer
 *
 * Return: the index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		int i = 0;

		for (; i < size; ++i)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
