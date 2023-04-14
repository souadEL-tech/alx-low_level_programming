#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -concate 2 string
 * @s1: string 1
 * @s2: string2
 * @n: parameter
 * Return: pointer of char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}

	while (s2 && s2[len2])
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	while (j < n)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
