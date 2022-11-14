#ifndef DOG
#define DOG
/**
 * struct dog - structs the function dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog my_dog;

my_dog *new_dog(char *name, float age, char *owner);
void free_dog(my_dog *d);

#endif
