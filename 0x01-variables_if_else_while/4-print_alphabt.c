#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - main block
* Description: prints the alphabet in lowercase except q and e
* Return: 0
*/
int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
