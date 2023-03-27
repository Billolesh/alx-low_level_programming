#include "main.h"
/**
*print_rev - prints the revere form
*@s: char containq swap content
*Return: 0 (success)
*/
void print_rev(char *s)
{
for (; *s == '\0'; s--)
{
_putchar (*s);
}
_putchar ('\n');
}
