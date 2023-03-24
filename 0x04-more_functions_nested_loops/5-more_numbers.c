#include "main.h"
/**
*more_numbers - prints numbers
*_putchar - prints item
*Return: numbers
*/
void more_numbers(void)
{
char yes[] = "01234567891011121314\n";
int i, x;
for (i = 0; yes[i] != '\0'; i++)
{
for (x = 0; x < 10; x++)
{
_putchar (yes[x]);
}
}
}
