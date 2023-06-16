#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -concate 2 string
 * @s1: string 1
 * @s2: string 2
 * @n: int parameter
 * Return: return ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count = 0, count1 = 0, i = 0, j = 0;
	int sign = n;
	char *ptr;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count])
		len1++;

	while (s2[count1])
		len2++;

	if (sign >= len2)
	{
		ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
		sign = len2;
	}

	else
		ptr = (char *) malloc(sizeof(char) * (len1 + n + 1));

	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}

	while (j < sign)
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}

	ptr[i] = '\0';
	return (ptr);
}
