#include "main.h"

/**
* set_bit - sets the value of a bit to 1 in the code
* at a given index.
* @n: pointer of an unsigned long int.
* @index: index of the bit manipulated
* Return: 1 if it is correct, -1 if not correct
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
*n = (*n | m);
return (1);
}
