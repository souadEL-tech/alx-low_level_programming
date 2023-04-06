#include "main.h"
/**
 * _strlen_recursion -string lenght recursive
 * @s: parameter
 * Return: return len of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
