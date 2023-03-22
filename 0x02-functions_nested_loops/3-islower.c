#include "main.h"
/**
* _islower - test if the caracter is lowercase of not
* @c :  character to check
* Return: 1 if c is lowercase , 0 if c is upsercase
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

else if (c >= 'A' &&  c <= 'Z')
return (0);

_putchar('\n');
return (0);

}
