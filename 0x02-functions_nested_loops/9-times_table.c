#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
int i;
int j;
int num;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
num = i * j;
if (j == 0)
{
_putchar('0' + num);
}
else
{
_putchar(' ');
if (num < 10)
{
_putchar(' ');
}
else
{
_putchar('0' + num / 10);
}
_putchar('0' + num % 10);
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
