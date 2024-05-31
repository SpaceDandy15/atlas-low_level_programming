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

    // find the end of the dest string
    for (i = 0; dest[i]!= '\0'; i++);

    // Append src to dest
    for (m = 0; src[m]!= '\0'; m++, i++)
    {
        dest[i] = src[m];
    }

    // Null terminate the result
    dest[i] = '\0';

    return dest;
}