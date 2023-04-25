#include <stdio.h>
#include <stdlib.h>
/**
* main - return the sum of two ints
* @argc: the no. of ints
* @argv: the two ints
* Return: the number of ints
*/
int main(int argc, char *argv[])
{
int i;
int result;
result = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) >= 'a' && atoi(argv[i]) <= 'z')
{
printf("Error\n");
return (0);
}
else
{
result += atoi(argv[i]);
}
}
printf("%d\n", result);
return (0);
}
