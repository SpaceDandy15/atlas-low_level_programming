#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers from 1 to 100, with a new line. 
 * but muliples of three print Fizz instead of number
 * muliples of five print Buzz
 * for numbers of that are multiples of 3 and 5 print FizzBuzz
 * Return: Alwyas 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{ 
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if ( i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
