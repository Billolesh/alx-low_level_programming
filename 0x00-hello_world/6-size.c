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
printf("size of a char: %lu byte(s]\n", sizeof(a));
printf("size of an int: &lu byte(s)\n", sizeof(b));
printf("size of a long int: %lu byte(s)\n", sizeof(c));
printf("size of a long long int: %lu byte(s)\n", sizeof(d));
printf("size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
