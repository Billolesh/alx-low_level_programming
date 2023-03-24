#include "main.h"
/**
*print_numbers - prints numbers
*_putchar - prints item
*Return: numbers
*/
void print_numbers(void)
{
char yes[] = "0123456789\n";
int i;
for (i = 0; yes[i] != '\0'; i++)
{
_putchar (yes[i]);
}
}
