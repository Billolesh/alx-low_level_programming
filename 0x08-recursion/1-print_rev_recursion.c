
#include "main.h"
/**
*_print_rev_recursion - prints an array an returns the char of the array
*@s: array
*Return: array output
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar (*s);
s--;
_print_rev_recursion(s);
}
