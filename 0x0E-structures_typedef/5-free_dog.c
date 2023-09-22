#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * free_dog - a function that frees dogs.
  * @d: a pointer to dogs structure.
  *
  * Return: return Nothing
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
