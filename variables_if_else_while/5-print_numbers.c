#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program prints all single digit numbes of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 11; i++)
		printf("%d, ", i);
	printf("\n");
	return (0);
}
