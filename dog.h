#include <stdlib.h>
#include <stdio.h>
/**
*main - prints the info of a dog
*struct dog - givr the info as unit
*Return - the info of the dog
*/
struct dog
{
char name[6];
float age;
char owner[5];
};
int main(void)
{
struct dog my_dog = {"Poppy", 3.5, "Bob"}
printf("My name is %s, and I am %f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
