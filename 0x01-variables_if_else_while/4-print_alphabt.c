#include <stdio.h>
/**
*main - print letters
*Return: 0 (pass)
*/
int main(void)
{
char yes[] = "abcdfghijklmnoprstuvwxyz\n";
int i;
for (i = 0; yes[i] != '\0'; i++)
{
putchar(yes[i]);
}
return (0);
}

