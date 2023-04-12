#include "main.h"
#include <stdlib.h>
/**
 * str_concat -concat 2 string
 * @s1: pointer
 * @s2: pointer
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{

char *ptr;
int s1i = 0;
int s2j = 0;
int p1;
int p2;
int i = 0;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
while (s1[s1i] != '\0')
{
s1i++;
}
while (s2[s2j] != '\0')
{
s2j++;
}
ptr = malloc(sizeof(char) * ((s1i + 1) + (s2j + 1)));
if (ptr == NULL)
{
return (NULL);
}

for (int p2 = 0; p2 < (s1i + 1); p2++)
{
ptr[p2] = s1[p2];
}
p1 = p2;
while (s2[i] != '\0')
{
ptr[p1] = s2[i];
p1++;
i++;
}
return (ptr);
}
