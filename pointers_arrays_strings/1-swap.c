#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: point to first value
 * @b: point to second value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
