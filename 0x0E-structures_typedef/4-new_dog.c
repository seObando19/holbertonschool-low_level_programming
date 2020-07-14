#include "dog.h"
#include <stdlib.h>
/**
  * *new_dog - creates a new dog.
  *@name: member 1
  *@age: member 2
  *@owner: member 3
  *Return: procress failed NULL or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
