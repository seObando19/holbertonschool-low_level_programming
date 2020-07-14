#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - This function returns the length of a string
 * @l: Variable that contains a character array to be counted
 * Return: Length of the string
*/
int _strlen(char *l)
{
	int i = 0;

	while (l[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: Parameter to computer
 *@src: parameter
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
  * *new_dog - creates a new dog.
  *@name: member 1
  *@age: member 2
  *@owner: member 3
  *Return: procress failed NULL or pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *ptr1, *ptr2;
	struct dog *newDog;
	int a, b;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
	{
		return (NULL);
	}
	a = _strlen(name);
	b = _strlen(owner);
	ptr1 = malloc(a + 1);
	if (ptr1 == NULL)
	{
		free(newDog);
		return (NULL);
	}
	ptr2 = malloc(b + 1);
	if (ptr2 == NULL)
	{
		free(newDog);
		free(ptr1);
		return (NULL);
	}
	ptr1 = _strcpy(ptr1, name);
	ptr2 = _strcpy(ptr2, owner);
	newDog->name = ptr1;
	newDog->age = age;
	newDog->owner = ptr2;
	return (newDog);
}
