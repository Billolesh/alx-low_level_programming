#include <stdio.h>
/**
 *main - prints all possible combinations of a single digit number
 *Return:0 (pass)
 */
int main(void)
{
int d;
for (d = 0; d <= 9; d++)
putchar(d);
{
if (d != 9)
putchar(",");
putchar(" ");
}
putchar("\n");
return (0);
}
