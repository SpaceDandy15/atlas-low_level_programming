#include "main.h"

/**
 * _isalpha - check
 * a@c: input character
 * Description function returns 1 if the character is a 
 * letter, lower case or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int is letter = 0;

	for (lower = 'a'; lower <= 'z'; lower ++)
	{
		for (upper = "A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter =1;
		}
	}
	return(isletter);
}
