#include "main.h"

/**
 * swap_int - swap  tow values
 * @a: parameter of the func
 * @b: parameter of the func
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}
