#include"main.h"
/**
 * int_dog -lowercase character
 * @d:poiner of struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}
