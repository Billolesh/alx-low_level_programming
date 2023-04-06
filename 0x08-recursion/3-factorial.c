#include "main.h"
/**
*factorial - prints the factorial of a number n
*@n: the number
*Return: the factotial of the number
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
