#include "main.h"
#include <stdio.h>

/**
 * main -print the name if the programme
 * @argc: number of arg
 * @argv: array od arg
 * Return: int val
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
