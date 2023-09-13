#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: the array
 * @size: typedef unsigned long long
 * @action: function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size > 0 && action)
	{
		size_t i = 0;

		for (; i < size; ++i)
			action(array[i]);
	}
}
