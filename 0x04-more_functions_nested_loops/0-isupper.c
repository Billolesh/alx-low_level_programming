#include "main.h"
/**
*_isupper - checks whether the char c is capital or not
*@c: char being checked
*Return: 0 (success)
*/
int _isupper(int c)
{
if (c <= 90 && c >= 65)
{
return (1);
}
else
return (0);
}
