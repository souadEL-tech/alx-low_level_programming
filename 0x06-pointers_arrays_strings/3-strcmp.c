#include "main.h"

/**
 *_strcmp - compare 2 string
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: return 0 if equale , 1 if s1 > s2 , -1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] == s2[i])
{
j++;
}
else if (s1[i] > s2[i])
{
return (15);
}
else
{
return (-15);
}
}

return (0);
}
