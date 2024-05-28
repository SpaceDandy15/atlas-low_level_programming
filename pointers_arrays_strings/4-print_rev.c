#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, m, len;
	
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (m = len - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
