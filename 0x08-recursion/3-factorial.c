#include "main.h"
/**
 * factorial - return fact
 * @n: parameter
 * Return: return int val
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(--n));

}
