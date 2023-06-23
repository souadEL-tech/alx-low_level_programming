#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


void (*f)(char *fname)
{
	int i = 0;

	while (fname[i])
	{
		_putchar(fname[i]);
		i++;
	}

}

/**
 * print_name -function that print a name
 * @name: string para
 * @f: pointer to a function as a parameter
 * @*: char of f
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	 f(name);


}
