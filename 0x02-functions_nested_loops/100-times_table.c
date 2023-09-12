#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: start point
 * Return: void
 */

void print_times_table(int n)
{
int i;
int j;
int pro;
if (n == 15 || n == 0)
{
return;
}

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
pro = i * j;
if (j != n)
{
_putchar('0' + pro);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + pro);
}
}
}
}
