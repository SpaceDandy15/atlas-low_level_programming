#include "search_algos.h"

/**
 * linear_search - funciton that searches for a value in an array of
 * integers using the linear search algorithm
 * @size: number of elements in array
 * @value: value to search for
 * @array: pointer to the first element of the array to search in
 *
 * Return: first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		return (i);
	}
	return (-1);
}
