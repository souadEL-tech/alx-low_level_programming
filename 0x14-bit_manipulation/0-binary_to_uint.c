#include "main.h"
#include <stdio.h>

/**
 * power -the name of function
 * @topow: parameter 1
 * @i: parameter 2
 * Return: return unsigned int
 */

unsigned int power(unsigned int topow, unsigned int i)
{
	unsigned int ooss = 1;

	while (i > 0)
	{
		ooss *= topow;
		i--;
	}
	return (ooss);
}






/**
 * binary_to_uint -the name of the function
 * @b: parameter
 * Return: return unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;
	unsigned int decimal = 1;

	if (*b != '0' || *b != '1' || b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		i++;
	}
	while (b[j] != '\0')
	{
		if (b[j] == '0')
		{
			i--;
			j++;
		}
		else
		{
			decimal *= (power(2, i));
			i--;
			j++;
		}
	}
	return (decimal);
}
