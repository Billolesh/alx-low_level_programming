#include "main.h"
/**
*main - prints an array of char
*Return: 0 (success)
*/
int main(void)
{
char words[] = "_putchar\n";
int i;
for (i = 0; words[i] != '\0'; i++)
{
_putchar(words[i]);
}
return (0);
}
