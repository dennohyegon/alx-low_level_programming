#include "main.h"

/**
* clear_bit - sets the value of a bit to 0.
* at a given index.
* @n: pointer of an unsigned long int in the code
* @index: index of the bit in the program
* Return: 1 ifcorrect, -1 if it is not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;
if (index > 63)
return (-1);
m = 1 << index;
if (*n & m)
*n ^= m;
return (1);
}
