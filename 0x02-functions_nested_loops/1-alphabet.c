#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */
void print_alphabet(void)
{
int i = 97;
while (i <= 122)
{
_putchar(i);
i++;
}
_putchar('\n');
}
