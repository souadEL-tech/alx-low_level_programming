#include "main.h"
#include <stdlib.h>

/**
 * *array_range -function that creates an array of integers.
 * @min: min val
 * @max: max val
 * Return: return ptr
 */


int *array_range(int min, int max)
{
	int size = 0, i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	size = (max - min);

	ptr = (int *) malloc(sizeof(int) * size + 1);
	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}
	return (ptr);

}
