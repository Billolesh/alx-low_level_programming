
#ifndef MY_FUNCTION_DEF
#define MY_FUNCTION_DEF
#include <stdlib.h>
#include <stdio.h>
/**
*struct dog - give the info as unit
*@name: name of the dog
*@age: the age of the dog
*@owner: the name of the dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
