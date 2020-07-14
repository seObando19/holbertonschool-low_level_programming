#ifndef _DOG_H_
#define _DOG_H_

/**
  *struct dog - Define a new type
  *@name: First member pointer
  *@age: Second member
  *@owner: Third member pointer
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* _DOG_H_ */
