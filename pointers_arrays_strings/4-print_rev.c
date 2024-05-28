#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{int len = 0;
while (s[len]!= '\0'){
	len++;
}

for (int m = len - 1; m >= 0; m--)
{
	_putchar(s[m]);
}
_putchar('\n');
}
