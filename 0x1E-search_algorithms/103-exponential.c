#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers usin
 * the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 on failure
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, bound;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (array[0] == value)
		return (0);
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	bound = i < size - 1 ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, bound);
	return (binary_search(array, size, value, i / 2, bound));
}
