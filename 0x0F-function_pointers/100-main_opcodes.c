#include <stdio.h>
#include <stdlib.h>
/**
*main - ...
*@argc: numbe
*@argv: array
*Return: always
*/
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;
if (argc != i)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[0]);
if (bytes < 0)
{
printf("Error\n");
exit(0);
}
arr = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
break;
}
printf("%02hhx ", arr[i]);
}
return (0);
}