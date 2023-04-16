#include "main.h"
/**
 * *_strncat - concatenates two strings with limit byte
 * @dest: pointer , parameter
 * @src: pointer , parameter
 * @n: parameter
 * Return: char pointer
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';

return (dest);
}
