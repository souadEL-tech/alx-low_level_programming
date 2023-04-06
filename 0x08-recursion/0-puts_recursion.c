#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: parameter of func
 * Return: Rerutn nothing
 */
void _puts_recursion(char *s)
{
	char *a;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	a = s++;
	_puts_recursion(a);
}
