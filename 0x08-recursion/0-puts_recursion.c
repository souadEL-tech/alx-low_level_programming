#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: parameter of func
 * Return: Rerutn nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(s[i]);
	_puts_recursion(s[i + 1]);
}
