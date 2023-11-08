#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog - Prints all the data of a dog
  * @dog_info: A dog structure
  *
  * Return: Nothing
  */
void print_dog(struct dog *dog_info)
{
	if (dog_info != NULL)
	{
		printf("Name: %s\n", (dog_info->name) ? dog_info->name : "(nil)");
		printf("Age: %f\n", (dog_info->age) ? dog_info->age : 0);
		printf("Owner: %s\n", (dog_info->owner) ? dog_info->owner : "(nil)");
	}
}
