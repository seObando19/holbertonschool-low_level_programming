#include "dog.h"
#include <stdio.h>
/**
  *init_dog -initialize a variable of type struct dog
  *@d:pointer of struct
  *@name: value 1
  *@age:value 2
  *@owner: value 3
  *Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
