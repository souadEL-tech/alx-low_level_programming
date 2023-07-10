#include "main.h"
#include "math.h"
/**
 * binary_to_uint - the name of the function
 * @b: parameter
 * Return: return unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;
	unsigned int decimal = 0;

	if (b != '0' || b != '1' || b == NULL)
		return (NULL);
	while (b[i] != '\0')
	{
		i++;
	}

	while (b[j] != '\0')
	{
		decimal = decimal +(b[j] * (pow(2 , i)));
		i++;
		j++;
 	}
	return (decimal);
}
