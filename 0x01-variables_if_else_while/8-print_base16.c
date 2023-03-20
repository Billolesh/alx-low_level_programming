#include <stdio.h>
/**
*main - print no.s of 16 lower
*Return: 0 (pass)
*/
int main(void)
{
char yes[] = "0123456789abcdef";
int i;
for (i = 0; yes[i] != '\0'; i++)
{
putchar(yes[i]);
}
return (0);
}
