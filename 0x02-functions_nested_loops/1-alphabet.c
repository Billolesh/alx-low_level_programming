#include "main.h"
/**
*print_alphabet - prints the array of ltters
*Return: 0 (success)
*/
void print_alphabet(void)
{
char yes[] = "abcdefghijklmnopqrstuvwxyz\n";
int i;
for (i = 0; yes[i] != '\0'; i++)
{
_putchar(yes[i]);
}
}
