#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this c program prints the alphabet in lowercase,
 * followed by a new line. 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
