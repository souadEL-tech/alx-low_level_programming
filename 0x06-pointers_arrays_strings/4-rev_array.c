#include "main.h"
/**
 * reverse_array- reverse tab
 * @a: parameter 1
 * @n: parameter 2
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
