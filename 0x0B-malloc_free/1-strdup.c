#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - finction
 * @str: parameter
 * Return: return ptr
 */


char *_strdup(char *str)
{
	char *ptr;
	int parcour = 0;
	int size = 0;
	int parcour2 = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + parcour) != '\0')
	{
		size++;
		parcour++;
	}

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	while (parcour2 < size)
	{
		*(ptr + parcour2) = *(str + parcour2);
		parcour2++;
	}

	*(ptr + parcour2) = '\0';

	return (ptr);
}

