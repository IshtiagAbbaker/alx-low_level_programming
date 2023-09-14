#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* @n : the number of times the characte
* Return: void
**/

void print_diagonal(int n)
{
int i;
int space;
if (n <= 0)
_putchar('\n');
else
{
for (i = 1; i <= n; ++i)
{
for (space = 1; space <= i; ++space)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}
