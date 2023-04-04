#include "main.h"
/**
 * _memset - fills memory with a caracter
 * @s: char pointer
 * @b: caracter
 * @n: parameter
 * Return: pointer of char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (s);
}
