#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - a program that initializes a variable of type struct dog.
 * @dog_info: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *dog_info, char *name, float age, char *owner)
{
	if (dog_info != NULL)
	{
		dog_info->name = name;
		dog_info->age = age;
		dog_info->owner = owner;
	}
}
