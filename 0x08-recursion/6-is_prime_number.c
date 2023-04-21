#include "main.h"
/**
*is_prime_number - checks if the numbre is prime
*@n: the number being tested
*Return: the number
*/
int is_prime_number(int n)
{
if (n / n == 1 || n / 1 == n)
{
return (1);
}
else
{
return (0);
}
}
