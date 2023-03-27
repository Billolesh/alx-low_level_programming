#include "main.h"
/**
*_puts - prints a stirng
*str - number being printed
*Return: 0 (success)
*/
void _puts(char *str)
{
str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
while (*str != "\0")
{
_putchar (*str);
str++;
}
}
