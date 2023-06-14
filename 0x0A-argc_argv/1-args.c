#include "main.h"
#include <stdio.h>

/**
 * main -print the number of arguments passed to the program
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
