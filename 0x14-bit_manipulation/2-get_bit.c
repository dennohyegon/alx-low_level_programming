#include "main.h"

/**
* get_bit - returns the value of a bitss
* index.
* @n:
* @index: index of the bit in the program
* Return:returns the value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;
if (n == 0 && index < 64)
return (0);
for (i = 0; i <= 63; n >>= 1, i++)
{
if (index == i)
{
return (n & 1);
}
}
return (-1);
}
