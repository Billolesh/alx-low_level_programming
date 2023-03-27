#include "main.h"
/**
*_puts - prints a stirng
*@str:  number being printed
*_putchar - prints the value
*Return: 0 (success)
*/
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
