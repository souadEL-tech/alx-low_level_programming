#include "main.h"
#include <stdlib.h>

/**
 * *str_concat -concate 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: return ptr
 */


char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size_s1 = 0, size_s2 = 0;
	int str1 = 0, str2 = 0;

	while (*(s1 + size_s1))
		size_s1++;

	while (*(s2 + size_s2))
		size_s2++;

	ptr = (char *) malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (ptr == NULL)
		return (NULL);

	if (s1)
	{
		while (*(s1 + str1))
		{
			*(ptr + str1) = *(s1 + str1);
			str1++;
		}
	}

	if (s2)
	{
		while (*(s2 + str2))
		{
			*(ptr + str1) = *(s2 + str2);
			 str1++;
			 str2++;
		}
	}

	*(ptr + str1) = '\0';
	return (ptr);

}
