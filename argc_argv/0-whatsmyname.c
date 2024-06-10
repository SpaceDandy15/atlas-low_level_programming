#include <stdio.h>
#include "main.h"

/**
 * _whatsmyname - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * 
 * Rturn: Always 0 (Success)
 */
int main(int argc __ atrribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
