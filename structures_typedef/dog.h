#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
* struct dog - a structure that represents a dog
* @name: the name of the dog
* @age: the age of the dog
* @owner: the owner of the dog
*
* Description: Stores basic information about a dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
