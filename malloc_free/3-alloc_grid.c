#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of integers
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, m;

	if (height <= 0 || width, <= 0)
	return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(size of(int) * width);
		if(arr[i] == NULL)
		{
			free(arr);
			for (m = 0; m <= i; m++)
			free(arr[m]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (m = 0; m < width; m++)
	{
		arr[i][m] = 0;
	}
	}
}
