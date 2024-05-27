#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	char *end = s;
	
	while (*end) 
	{
		++end;
	}
	--end;

	while (end >= s)
	{
		_putchar(*--end);
	}
	_putchar('\n');
}
