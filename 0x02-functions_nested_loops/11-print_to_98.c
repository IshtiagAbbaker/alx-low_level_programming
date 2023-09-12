#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start point
 * Return: void
 */
void print_to_98(int n)
{
while (n <= 98)
{
if (n != 98)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + n);
}
n++;
}
while (n >= 98)
{
if (n != 98)
{
_putchar('0' + n);
_putchar(',');
_putchar(' ');
}
else
{
_putchar('0' + n);
}
n--;
}
}
