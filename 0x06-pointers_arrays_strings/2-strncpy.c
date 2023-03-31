#include "main.h"
/**
 * *_strncpy - copy string
 * @dest: pointer , parameter
 * @src: pointer , parameter
 * @n: parameter
 * Return: char pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);
}
