#include "main.h"
/**
 * _abs: print the absolut value of a number
 * @n: parameter to ckeck
 * Return: Always 0
 */
int _abs(int n)
{

if (n >= 0)
{
return (n);
}
else if (n < 0)
{
n = n*(-1);
return (n);
}

_putchat('\n');
return (0);

}
