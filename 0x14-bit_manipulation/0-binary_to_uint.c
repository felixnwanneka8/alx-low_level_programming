#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
int zee;
unsigned int jack = 0;

if (!b)
return (0);
for (zee = 0; b[zee]; zee++)
{
if (b[zee] < '0' || b[zee] > '1')
return (0);
jack = 2 * jack + (b[zee] - '0');
}
return (jack);
}
