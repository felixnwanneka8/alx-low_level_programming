#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
int zone, bro_mike = 0;
unsigned long int new;

for (zone = 63; zone >= 0; zone--)
{
new = n >> zone;
if (new & 1)
{
_putchar('1');
bro_mike++;
}
else if (new)
_putchar('0');
}
if (!new)
_putchar('0');
}
