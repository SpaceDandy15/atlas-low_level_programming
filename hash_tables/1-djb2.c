#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm
 * @str: The string to hash
 *
 * Return: The calcuated hash
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
		int c;

		hash = 5381;
		while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hahs * 33 + c */

		return (hash);
}
