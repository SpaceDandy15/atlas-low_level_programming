#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evalute
 * Return: the length of the string
 */


int _strlen(char *s)
{
	char *end = s;
	while (*end)
	{
		++end;
	}
	return end -s;
}
