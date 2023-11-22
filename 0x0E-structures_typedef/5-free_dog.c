#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;
    float age;
    char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner)
{
if (name == NULL || owner == NULL)
{
return NULL;
}
dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));
if (newDog == NULL)
{
return NULL;
}
newDog->name = (char *)malloc(strlen(name) + 1);
newDog->owner = (char *)malloc(strlen(owner) + 1);

if (newDog->name == NULL || newDog->owner == NULL) {
free(newDog);
free(newDog->name);
free(newDog->owner);
return NULL;
}

strcpy(newDog->name, name);
newDog->age = age;
strcpy(newDog->owner, owner);
return newDog;
}

int main() {
    char name[] = "Buddy";
    char owner[] = "Alice";
    dog_t *myDog = new_dog(name, 3.5, owner);

if (myDog == NULL)
{
printf("Failed to create a new dog.\n");
}
else 
{
printf("Created a new dog:\n");
printf("Name: %s\n", myDog->name);
printf("Age: %.1f\n", myDog->age);
printf("Owner: %s\n", myDog->owner);
free(myDog->name);
free(myDog->owner);
free(myDog);
}
return 0;
}

