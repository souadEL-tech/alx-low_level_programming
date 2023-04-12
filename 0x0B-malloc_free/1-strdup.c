#include "main.h"
#include <stdlib.h>
/**
 * _strdup -return pointer with string
 * @str: pointer
 * Return: return pointer
 */
char *_strdup(char *str)
{
	int sz = 0;
	char *ptr;
	unsigned int i = 0;

	while (str[sz] != '\0')
	{
		sz++;
	}
	ptr = malloc(sizeof(char) * sz);
	if (ptr == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i = i + 1;
	}
	return (ptr);
}
