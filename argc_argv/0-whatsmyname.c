#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * 
 * Rturn: Always 0 (Success)
 */
int main(int argc __atrribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
