#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
* Return: void
**/

void more_numbers(void)
{
int i;
int c;
for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
_putchar('0' + c);
}
_putchar('\n');
}
_putchar('\n');
}
