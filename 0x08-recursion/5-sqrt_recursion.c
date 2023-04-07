#include "main.h"
/**
 * check - function2
 * @a: para
 * @b: para
 * Return: int
 */
int check(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	if (a * a > b)
	{
		return (-1);
	}
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - function sqrt
 * @n: parameter
 * Return:int val
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check(1, n));
}
