#include<stdio.h>
#include "main.h"

/**
 * print_alphabet - this program prints alphabet in lower case
 *
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
