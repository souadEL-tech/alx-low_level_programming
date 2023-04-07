#include "main.h"
/**
 * _strlen_recursion -string lenght recursive
 * @s: parameter
 * Return: return len of string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 +  _strlen_recursion(++s));

}
