#include "main.h"
/**
*puts2 - prints asome  numbers
*@str:  number of elemnts in thr array
*Return: 0 (success)
*/
void puts2(char *str)
{
int i;
int j = 0;
while (*str != '\0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
