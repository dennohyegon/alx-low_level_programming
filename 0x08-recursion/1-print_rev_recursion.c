#include <stdio.h>
/**
* _puts_recursion - prints a string, followed by a new line.
* @s: string
* Return (*s) : recursive input
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0') {
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
