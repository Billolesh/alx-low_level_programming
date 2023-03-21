#include "main.h"
/**
*_islower - searches for c in in the lower case letters
*@c: - number being checked
*Return: 0 (success)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
