#include <stdio.h>
#include <stdlib.h>
/**
*print_name - the function prints the name
*@f: pointer to the function tat prints the name
*@name: the name being printed
*Return: the name
*/
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
