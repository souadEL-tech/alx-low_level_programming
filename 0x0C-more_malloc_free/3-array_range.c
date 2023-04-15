#include "main.h"
#include <stdlib.h>
/**
 * array_range -create array
 * @min: parameter 1
 * @max: parameter 2
 * Return: return int val
 */
int *array_range(int min, int max)
{
	int len = 0;
	int *ptr;
	int i;
	int j = 0;

	if (min > max)
		return (NULL);
	len = (min + max + 1);
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}
