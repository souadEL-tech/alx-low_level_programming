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
	char *ptr;
	unsigned int i = 0, final_size = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	final_size = size * nmemb;

	ptr = (char *) malloc(final_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < final_size; i++)
	{
		*(ptr + i) = 0;
	}
	return ((char *)ptr);
}
