#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the command line argumesnts
*@argc: the number od args
*@argv: the arguments themselvea
*Return: the arguments themeslves
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
