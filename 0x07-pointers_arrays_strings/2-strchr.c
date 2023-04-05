#include "main.h"
/**
 *_strchr -function that locates a character in a string
 *@s: pointer
 *@c: character
 *Return: return s pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		else
		{
			i++;
		}
	}

	*s = NULL;
	return (s);
}
