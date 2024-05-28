#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * including the terminating nully byte (\0)
 * to the buffer pointed to by dest.
 * @dest: pointer to be the buffer in which we copy the string
 * @src: string to be copied
 */
char *_strcpy(char * dest, char *src)
{
	char *end = src;
	while (*end++!= '\0');
	--end;

	for (; src <= end; dest++)
	{
		*dest = *src;
		src++;
	}
	*dest = '\0';
	return dest;
}
