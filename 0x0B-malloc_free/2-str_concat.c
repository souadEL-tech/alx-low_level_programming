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
	int len1 = 0;
	int len2 = 0;
	char *ptr;
	int i = 0;
	int j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		ptr[i] = s1[i];
	}
	i = i + 1;
	for (j = 0; j <= len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
