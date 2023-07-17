#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure to store information about a dog
 * @name: a pointer to a character (string) representing the dog's name
 * @age: a float representing the dog's age
 * @owner: a pointer to a character (string) representing the owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
