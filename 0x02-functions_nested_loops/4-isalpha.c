#include "main.h"
/**
*_isalpha - searches for c in in the lower case letters
*@c: - number being checked
*Return: 0 (success)
*/
int _isalpha(int c)
{
  if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}


