#include <stdlib.h>
#include "main.h"
/*
 * create_array - function
 * @c: parameter 2
 * Return: return ptr
 */

char *create_array(unsigned int size, char c)
{
	unsigned int comp = 0;
	char *ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (ptr);
	}
	while (ptr)
	{
		ptr[comp] = c;
		comp++;
	}

	return (ptr);
}
