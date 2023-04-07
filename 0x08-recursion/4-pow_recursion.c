#include "main.h"
/**
 * _pow_recursion -returns the value of x raised to the power of y
 * @x: parameter 1
 * @y: parameter 2
 * Return: return int val
 */
int _pow_recursion(int x, int y)
{
	int fact = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		fact = x * _pow_recursion(x, y - 1);
	}
	return (fact);
}

