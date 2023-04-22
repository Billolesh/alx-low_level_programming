#include <stdlib.h>
#include <stdio.h>
/**
*main - prints a the arguments passed
*@argc: the no. of args
*@argv: the args themselves
*Return: the args in new lines
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n",argv[i]);
}
return (0);
}
