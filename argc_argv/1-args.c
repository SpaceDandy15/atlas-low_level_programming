#include <stdio.h>
#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 * @argc: number of argmuments 
 * @argv: array of arguments
 * Return: Always 0 (Success)
*/
int main(intargc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
