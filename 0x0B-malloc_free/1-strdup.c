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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[sz] != '\0')
	{
		sz++;
	}
	ptr = malloc(sizeof(char) * sz + 1);
	if (ptr == NULL)
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
