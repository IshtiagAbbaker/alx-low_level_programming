#include "main.h"

/**
* print_numbers - prints the numbers, from 0 to 9, followed by a new line
* Return:  void
**/
void print_numbers(void)
{
int i = 0;
while (i <= 9)
{
_putchar(48 + i);
i++;
}
_putchar('\n');
}
