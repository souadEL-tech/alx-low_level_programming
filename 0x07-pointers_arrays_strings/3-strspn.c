#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: sub string
 * Return: retrun length of accepte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int val = 0;
	int i = 0;
	int j = 0;

	while (accepte[i] != '\0' && s[j] != '\0')
	{
		if (accept[i] == s[j])
		{
			val++;
			i++;
			j++;
		}
		else
		{
			i++;
			j++;
		}
	}
	return (val);
}
