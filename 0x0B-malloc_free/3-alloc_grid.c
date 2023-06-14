#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -returns a pointer to a 2 dimensional array of integers
 * @width: parameter 1
 * @height: parameter 2
 * Return: return ptr
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int l = 0, c = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(sizeof(int *) * (width * height));
	if (ptr == NULL)
		return (NULL);
	for (l = 0; l < width; l++)
	{
		for (c = 0; c < height; c++)
		{
			*(ptr + l + c) = 0;
		}
	}

	return (ptr);
}
