#include <stdlib.h>
#include <time.h>
/*more headers goes there */
#include <stio.h>
#include <stio.h>
/* betty style doc for function main goes there */
/**
*main - code that checks the status of a value
*Return: 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
{
printf("is zero, \n");
}
else if (n < 0)
{
printf("is negative, \n");
}
else
{
printf("is positive, \n");
return (0);
}
