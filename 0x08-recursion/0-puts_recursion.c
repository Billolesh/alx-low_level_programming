#include "main.h"
/**
* _puts_recursion - prints an array an returns the char of the array
*@s: array
*Return: array output
*/
void _puts_recursion(char *s)
{
unsigned int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar (s[i]);
}
_putchar ('\n');
}
