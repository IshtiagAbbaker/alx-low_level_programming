#include "main.h"

/**
 * *_strcpy- function to copies the string pointed to by src
 * including the terminating null byte (\0), 
 * to the buffer pointed to by dest.
 *@dest : pointer 1
 *@src : pointer 2
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i = -1;

do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');

return (dest);
}
