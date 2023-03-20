#include <stdio.h>
/**
*main - prints out letters in reversed form
*Return: 0 (pass)
*/
int main(void)
{
char yes[] = "zxywvutsrqponmlkjihgfedcba\n";
int i;
for (i = 0; yes[i] != '\0'; i++)
{
putchar(yes[i]);
}
return (0);
}
