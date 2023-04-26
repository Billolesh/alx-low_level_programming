#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*print_dog - the name of info of the dog being initialized
*@d: the name for reference
*Return: nothing
*/
void print_dog(struct dog *d)
{
if (d->name == NULL || d->age == 0 || d->owner == NULL)
{
printf("Name:nil\n");
printf("Age:nil\n");
printf("Owner:nil\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}