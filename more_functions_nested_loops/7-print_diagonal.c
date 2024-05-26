#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the characte \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, m;

		for (i = 0; i < n; i++)
		{
			for (m =0; m < n; m++)
			{
				if (m == i)
					_putchar('\\');
				else if (m < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
