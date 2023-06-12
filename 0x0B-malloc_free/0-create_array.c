#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: parametre 1
 * @c: char
 * Return: return ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}

	*(ptr + i) = '\0';
	return (ptr);
}
