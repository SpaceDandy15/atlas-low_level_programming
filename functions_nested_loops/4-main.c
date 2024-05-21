#include "main.h"

/**
 * main - check
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putch(r+'0');
	r = _isalpha('o');
	_putchar(r+ '0');
	r = -isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return(0);
}
