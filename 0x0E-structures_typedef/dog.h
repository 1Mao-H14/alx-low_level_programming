#ifndef DOG
#define DOG

/**
 * struct dog - DOG  CLASS  STRUCTURE
 * @name: NAME OF the DOG
 * @age: AGE of the DOG
 * @owner: Owner the DOGE
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

void free_dog(dog_t *d);

#endif
