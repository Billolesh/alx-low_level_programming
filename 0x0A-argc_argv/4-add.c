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
int result = 0;
for (i = 1; i < argc; i++)
{
if (argc > 2 && (argv[i][0] > 97 && argv[i][0] < 122))
{
result = result + atoi(argv[i]);
printf("%d\n", result);
{
return (2);
}
}
else if (argc < 2)
{
printf("0\n");
{
return (3);
}
}
else if (argv[i][0] > 97 && argv[i][0] < 122)
{
printf("Error\n");
{
return (4);
}
}
else
{
return (1);
}
}
return (0);
}
