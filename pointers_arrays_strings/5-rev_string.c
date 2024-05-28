#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string 
 * @s: string needs to be reversed
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s + strlen(s) - 1;
	
	while (start < end) 
	{
		char tmp = *start;
		*start++ = *end;
		*end-- = tmp;
	}
}
