
#include "main.h"
/**
*print_last_digit - prints the last digit of the integer
*@n: the number which its last intger is being printed
*Return: values of the last digit
*/
int print_last_digit(int n)
{
int print_last_digit = n % 10;
_putchar(print_last_digit + '0');
return (print_last_digit);
}
