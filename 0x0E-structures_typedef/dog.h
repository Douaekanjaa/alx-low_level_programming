#ifndef DOG_H
#define DOG_H

/**
  * struct dog - struct with dog infos
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
