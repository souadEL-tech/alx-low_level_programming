#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -concate 2 string
 * @s1: string 1
 * @s2: string 2
 * @n: int parameter
 * Return: return ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1 = 0, size_s2 = 0, new_size = 0, i = 0, j = 0;
	char *ptr;

	if (s1 == NULL)
		size_s1 = 1;
	else
	{
		while (*(s1 + size_s1))
			size_s1++;
	}

	if (s2 == NULL)
		n = 1;

	else
	{
		while (*(s2 + size_s2))
			size_s2++;
	}

	new_size = size_s1 + n + 1;
	ptr = (char *) malloc(sizeof(char) * new_size);
	if (ptr == NULL)
		return (NULL);
	while (*(s1 + i))
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	if (n >= size_s2)
		n = size_s2;
	while (j < n)
	{
		*(ptr + i) = *(s2 + j);
		i++;
		j++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
