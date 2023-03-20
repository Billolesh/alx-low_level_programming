#include <stdio.h>
/**
 *main - prints all possible combinations of a single digit number
 *Return:0 (pass)
 */
int main(void)
{
char yes[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9,";
int i;
for (i = 0; yes[i] != '\0'; i++)
{
putchar(yes[i]);
}
return (0);
}
