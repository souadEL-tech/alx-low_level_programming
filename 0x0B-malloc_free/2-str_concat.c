#include "main.h"
#include <stdlib.h>
/**
 * str_concat -concat 2 string
 * @s1: pointer
 * @s2: pointer
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *ptr;
	int i = 0, j = 0;

	if (s1)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
