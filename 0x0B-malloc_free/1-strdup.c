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
