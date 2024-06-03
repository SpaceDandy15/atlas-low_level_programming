#include
/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src:f meory are to copy from
 * @n: number of bytes to copy
 * 
 * Return: pointer to dest
*/
char *_memcpy(cahr *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
