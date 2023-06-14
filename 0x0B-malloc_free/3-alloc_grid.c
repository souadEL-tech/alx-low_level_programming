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
	int l = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **) malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		ptr[l] = (int *) malloc(width * sizeof(int));
	}

	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[l][j] = 0;
		}
	}
	return (ptr);
}
