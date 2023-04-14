#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(sizeof(int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
