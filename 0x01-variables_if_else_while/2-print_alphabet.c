#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: prints the alphabet in lowercase
* Return: 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
