#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is a short description of the project
 *  variable will store a different value every time you
 *   run this progra
 *
 *   Return:
 *   */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_Max /2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n;
				else
				printf("%d is negative\n", n);
				return (0);}
