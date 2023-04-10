#include "main.h"

/**
* get_endianness - checks the endianness in the program
* Return: 0 if big endian in code, 1 if little endian in code
*/
int get_endianness(void)
{
unsigned int x;
char *c;
x = 1;
c = (char *) &x;
return ((int)*c);
}
