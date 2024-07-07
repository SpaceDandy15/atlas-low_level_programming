#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to conver one number to another number
 * @n: first number
 * @m: second number to conert to
 * Return: number of its that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

diff = n ^ m;
counter = 0;

while (diff)
{
	counter ++;
	diff &= (diff - 1);
}

return (counter);
}
