#include "main.h"

/**
 * *_strspn - gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match ins
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, m, v, flag;

	v = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
			for (m = 0; accept[m] != '\0'; m++)
		{
				if (s[i] == accept[m])
				{
					v++;
					flag = 1;
				}
		}
		if (flag == 0)
		{
			return (v);
		}
	}

	return (0);
}
