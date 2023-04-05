#include "main.h"
/**
* _puts_recursion - prints an array an returns the char of the array
*@s: array
*Return: array output
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
_putchar (*s);
s++;
_puts_recursion(s);
}
