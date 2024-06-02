#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * 
 * Return: pointer to the resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	i = 0;
	m = 0;

	while (dest[i] != '\0')
		i++;

	while (src[m] != '\0' && m < n)
	{
		dest[i] = src[m];
		i++;
		m++;
	}
	dest[i] = '\0';

	return (dest);

}
