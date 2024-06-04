#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to seach in
 * @needle: substring to look for
 *
 * Return: pointer to the begining of the located substring
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i, m;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (m = 0; needle[m] != '\0'; m++)
		{
			if (haystack[i + m] != needle[m])
				break;
		}
		if (!needle[m])
			return (&haystack[i]);
	}
	return (NULL);
}
