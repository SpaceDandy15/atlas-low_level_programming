#include<stdio.h>
#include "main.h"

/**
 * _abs - this function returns abolute value of a number
 *@r: an integer input
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}