#include "main.h"
#include <stdlib.h>

/**
 * *_realloc -function that reallocates a memory block using malloc and free
 * @ptr: old ptr
 * @old_size: old size
 * @new_size: new size
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *re_ptr, *old_ptr;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		free(ptr);
		re_ptr = malloc(new_size);
		return (re_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	re_ptr = malloc(new_size);
	if (re_ptr == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			re_ptr[i] = old_ptr[i];
			i++;
		}}
	if (new_size < old_size)
	{
		while (i < new_size)
		{
			re_ptr[i] = old_ptr[i];
			i++;
		}
	}
	free(old_ptr);
	return ((char *)re_ptr);
}
