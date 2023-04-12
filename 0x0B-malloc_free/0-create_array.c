#include "main.h"
#include <stdlib.h>
/**
 * create_array -create array with malloc
 * @size: parameter 1
 * @c: parameter 2
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
