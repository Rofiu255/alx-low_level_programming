#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @dog_info: The dog to be freed.
 */
void free_dog(dog_t *dog_info)
{
	if (dog_info == NULL)
		return;

	free(dog_info->owner);
	free(dog_info->name);
	free(dog_info);
}
