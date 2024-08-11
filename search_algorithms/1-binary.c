#include "search_algos.h"

/**
 * binary_search - function that searches for array value in array sorted array
 * of integers using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index - recursive function for helping binary_search
 * @array: pointer to the first element of the array to search in
 * @l: left index of array
 * @r: right index of array
 * @value: value to look for
 *
 * Return: the index where value is located
*/
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int mid;

	if (!array || l > r)
	return (-1);
	print_array(array, l, r);

	mid = 1 + (r - 1) / 2;
	if (l == r)
	return (*(array + mid) == value ? (int)mid : -1);

	if (array[mid] == value)
	return (mid);

	else if (array[mid] > value)
	return (binary_search_index(array, l, mid - 1, value));

	else
	return (binary_search_index(array, mid + 1, r, value));
}

/**
 * print_array - prints an array of integers
 * @array: the array to be printed
 * @l: the left index of the array
 * @r: the right index of the array
*/

void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i ++)
		printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}
