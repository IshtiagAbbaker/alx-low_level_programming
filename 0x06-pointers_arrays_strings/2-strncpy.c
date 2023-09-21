#include "main.h"
/**
 * *_strncpy - copy a string
 * @dest: pointer 1
 * @src: pointer 2
 * @n: int
 * Return: string
*/


char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
