#include "main.h"

/**
 *3-islower.c - checks for lower case character
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int 3_islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
