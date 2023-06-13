#include "main.h"
#include <stdlib.h>
/**
 * *str_concat -concatenates two strings
 * @s1: str 1
 * @s2: string 2
 * Return: return ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size_str1 = 0;
	int size_str2 = 0;
	int parcour = 0;
	int parcour1 = 0;
	int parcour2 = 0;

	while (*(s1 + parcour) != '\0')
	{
		parcour++;
		size_str1++;
	}
	while (*(s2 + parcour1) != '\0')
	{
		parcour1++;
		size_str2++;
	}

	ptr = (char *) malloc(sizeof(char) * (size_str1 + size_str2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		*(ptr + parcour2) = *s1;
	else
	{
		while (parcour2 < size_str1)
		{
			*(ptr + parcour2) = *(s1 + parcour2);
			parcour2++;
		}
	}
	parcour = 0;
	if (s2 == NULL)
		*(ptr + parcour2) = *s2;
	else
	{
		while (parcour < size_str2)
		{
			*(ptr + parcour2) = *(s2 + parcour);
			parcour++;
			parcour2++;
		}
	}
	*(ptr + parcour2) = '\0';
	return (ptr);
}
