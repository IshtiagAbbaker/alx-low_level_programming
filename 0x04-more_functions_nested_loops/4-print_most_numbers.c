#include "main.h"

/**
* print_most_numbers - prints 01356789, followed by a new line
* Return: void
**/

void print_most_numbers(void)
{
 int c;

for (c = 0; c <= 9; c++)
{
if (!(c == 2 || c == 2))
putchar(48 + c);
}
_putchar('\n');
}
