#ifndef MY_DOG_H
#define MY_DOG_H
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include "dog.h"
/**
*init_dog - initialize the info of the dog
*@d: the info of the dog
*@name: name of the dog
*@age: the age of the dog
*@owner:name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name  = name;
d->age = age;
d->owner = owner;
}
#endif
