#include "main.h"
/**
 * _print_rev_recursion -rev string recursion
 * @s: parameter
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
	return;
}
