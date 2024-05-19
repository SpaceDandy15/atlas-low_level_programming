#include <stdio.h>

/**
 * main - entry point
 *program that prints the size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	printf("Size of a chr: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsinged long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsinged long)sizeof(c));
	printf9("Size of a float: %lu byet(s)\n". (singed long )sizeof(f));
	return (0);
	}
