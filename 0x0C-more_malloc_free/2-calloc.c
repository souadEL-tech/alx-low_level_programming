#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (int *) malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*(ptr + i) = 0;
	}
	return ((int *)ptr);
}
