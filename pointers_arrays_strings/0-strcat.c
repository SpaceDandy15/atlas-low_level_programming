#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 * Return: pointer to the string
 */
char *_strcat(char *dest, char *src)
{
	int i, m;

	i = 0;
	m = 0;
	while (dest[i] != '\0')
	i++;

	while (src[m] != '\0')
	{
		dest[i] = src[m];
		m++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}