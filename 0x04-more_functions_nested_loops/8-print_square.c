#include "main.h"
#include <stddef.h>

/**
 * print_square - print a square using the character #
 *
 * @n: is the size of the square
 *
 * Return: Always 0 (Success)
*/

void print_square(int n)
{
int row, column;

for (row = 1; row <= n; ++row)
{
for (column = 1; column <= n; ++column)
_putchar('#');
_putchar('\n');
}
}
