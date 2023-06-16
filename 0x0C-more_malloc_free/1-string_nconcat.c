#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat -function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: number of caracter to concat
 * Return: return ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	else
	{
		while (s1[len1] != '\0')
			len1++; }
	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[len2] != '\0')
			len2++; }
	if (n >= len2)
		ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	else
		ptr = (char *) malloc(sizeof(char) * (len1 + n + 1));
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++; }
	if (n >= len2)
	{
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			i++;
			j++; }}
	else
	{
		while (j < n)
		{
			ptr[i] = s2[j];
			i++;
			j++; } }
	ptr[i] = '\0';
	return (ptr);
}
