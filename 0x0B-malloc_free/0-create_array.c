#include <stdlib.h>
#include "main.h"
/*
 * reate_array -allocat array of char
 * @size: parameter 1
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
	while (ptr[comp] != '\0')
	{
		ptr[comp] = c;
		comp++;
	}

	return (ptr);
}
