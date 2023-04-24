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
int result;
int i;
i = 1;
result = atoi(argv[1]);
if (argc < 3)
{
printf("0\n");
return (1);
}
else if (argv[i][0] < 97 && argv[i][0] > 122)
{
printf("Error\n");
i++;
return (1);
}
else
{
result = atoi(argv[1]) + atoi(argv[i + 1]);
i++;
printf("%d\n", result);
return (0);
}
}
