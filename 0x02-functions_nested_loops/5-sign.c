#include "main.h"
/**
*print_sign -checks the no. n
*@n: the no bening checked
*Return: 0 (pass)
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_puchar('0');
return ('0');
}
else
{
_puchar('+');
return (+1);
}
}
