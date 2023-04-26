#include <stdlib.h>
#include <stdio.h>
/**
*main - prints the number of arguments passed by the user
*@argv: the arguments
*@argc: the number of arguments
*Return: the number argc
*/
int main(int argc, char *argv[])
{
if (*argv[0] != '\0')
{
printf("%d\n", argc - 1);
}
return (0);
}
