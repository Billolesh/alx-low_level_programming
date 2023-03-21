#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet 10 times in a row
*Return: 0 (success)
*/
void print_alphabet_x10(void)
{
char yes[] = "abcdefghijklmnopqrstuvwxyz\n";
int i, x;
for (x = 0; x < 10; x++)
{
for (i = 0; yes[i] != '\0'; i++)
{
_putchar(yes[i]);
}
}
}
