#include<stdio.h>
#include "main.h"

/**
 * main - this program prints alphabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
