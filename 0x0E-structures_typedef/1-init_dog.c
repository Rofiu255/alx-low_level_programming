#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
  * init_dog - The function initializes a dog structure
  *
  * @d: A structure for dog info.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Return: return Nothing from void function
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
