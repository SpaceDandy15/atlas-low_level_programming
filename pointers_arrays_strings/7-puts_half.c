#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string needs to be printed
 */
void puts_half(char *str)
{
	int len, mid, i;
	for (len = 0; str[len] != '\0'; 
			len++);
	mid = len / 2;
	if (len % 2 != 0)
		mid++;
	for (i = mid; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
