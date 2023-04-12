#include "main.h"
#include <stdlib.h>
/**
 * _strdup -return pointer with string
 * @str: pointer
 * Return: return pointer
 */
char *_strdup(char *str)
{
	char *ptr = malloc(sizeof(char) * sizeof(str));
	unsigned int i = 0;

	if (ptr == NULL || sizeof(str) == 0)
	{
		return (NULL);
	}
	while (i < sizeof(str))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
