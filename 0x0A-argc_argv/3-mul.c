#include <stdlib.h>
#include <stdio.h>
/**
*main - mulipltys the two  number arguments
*@argc: the number o argumnts passed
*@argv: the name of the aruments passed
*Return: the  multiplication of the two parameters
*/
int main(int argc, char *argv[])
{
int result;
if (argc == 3)
{
result = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", result);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
