#include"main.h"
/**
 * init_dog -intiallize dog strcut par
 * @d:poiner of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
