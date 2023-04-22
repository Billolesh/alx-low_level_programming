#include "main.h"
/**
*is_prime_number - checks if the numbre is prime
*@n: the number being tested
*Return: the number
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
for (int i = 2; i <= n / 2; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
