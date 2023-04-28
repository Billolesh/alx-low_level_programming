dog_t *new_dog(char *name, float age, char *owner)
{
  dog_t *new_dog = malloc(sizeof(dog_t));
  if(new_dog == NULL)
    {
    return NULL;
    }
  new_dog->name = malloc(8);
  if (new_dog->name == NULL);
  {
    free(new_dog);
    return NULL;
  }
  new_dog->name = name;
 

  new_dog->age = malloc(8);
  if (new_dog->age == NULL);
  {
    free(new_dog->name);
    free(new_dog);
    return NULL;
  }
  new_dog->age = age;

  new_dog->owner = mallloc(8);
  if (new_dog-> == NULL);
    {
      free(new_dog->name);
      free(new_dog->age);
      free(new_dog);
      return NULL;
    }
    new_dog->owner = owner;
    free(new_dog->owner);
    return NULL;
}
  
  
