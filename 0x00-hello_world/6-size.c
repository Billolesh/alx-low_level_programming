#include <stdio.h>
/**
*main - program that prints an array off data sizes
*Return: 0 (pass)
*/
int main(void)
{
char a;
int b;
long int c;
long int d;
long long int e;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
