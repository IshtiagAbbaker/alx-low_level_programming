#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: start point
 * Return: void
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
printf("98");
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("\n");
}
