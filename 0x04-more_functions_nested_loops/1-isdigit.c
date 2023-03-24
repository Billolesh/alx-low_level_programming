#include "main.h"
/**
*_isdigit - check the no. is its between 9 and 0
*@c: number being checked
*Return: 0 (success)
*/
int _isdigit(int c)
{
if (c <= 57 && c >= 48)
{
return (1);
}
else
return (0);
}
