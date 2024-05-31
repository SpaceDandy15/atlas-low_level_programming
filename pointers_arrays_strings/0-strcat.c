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
    
    for (i = 0; dest[i]!= '\0'; i++);

    for (m = 0; src[m]!= '\0'; m++, i++)
    {
        dest[i] = src[m];
    }

    dest[i] = '\0';

    return dest;
}