#include "main.h"
/**
 * reverse_array- reverse tab
 * @a: parameter 1
 * @n: parameter 2
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
int tab[n];
int i = 0;
int j = n - 1;
while (i < n)
{
tab[i] = a[j];
i++;
j--;
}
a = tab;
}
