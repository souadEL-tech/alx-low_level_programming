#include "main.h"
/**
 * is_prime_number -prime number
 * @n: parameter
 * Return: return int val
 */
int is_prime_number(int n)
{

	if (n % 2 > 0)
	{
		return (1);
	}
	else if (n == 1)
	{
		return(0);
	}
	return (0);
}
