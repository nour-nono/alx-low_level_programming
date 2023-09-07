#include "main.h"
/**
 * array_range - concat 2 strings in heap
 * @min: num of arg
 * @max: num of arg
 * Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; ++min, ++i)
	{
		arr[i] = min;
	}
	return (arr);
}
