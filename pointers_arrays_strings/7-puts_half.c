#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string needs to be printed
 */
void puts_half(char *str)
{
	int len;
	int start_index;
	int i;
	
	for (len =0; str[len]!= '\0'; len++);

	if (len % 2 == 0)
		start_index = len / 2;
	else
		start_index = (len - 1) / 2;
	
	for (i = start_index; str[i]!= '\0'; i++)
		_putchar(str[i]);
}
