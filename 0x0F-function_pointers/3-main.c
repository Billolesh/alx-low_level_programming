#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - performs simple operations
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, 98, 99 or 100 on error
*/
#include "3-calc.h"
/**
*main - program
*@argc: number
*@argv: array
*Return: always
*/
int main(int argc, char *argv[])
int arg1, arg2, result;
char o;
int (*func)(int, int);
if (argc != 4)
[
printf("Error\n");
exit(98);
}
arg1 = atoi(argv[1]);
arg2 = atoi(argv[3]);
func = get_op_func(argv[2]);
if (!=func)
{
printf("Error\n");
exit(99)
}
o = *agr[2];
if ((o == '/' || o == '%') && arg2 == 0)
{
printf("Error\n")
exit(100);
}
result = func(arg1, arg2);
printf("%d", result);
return (0);
}
