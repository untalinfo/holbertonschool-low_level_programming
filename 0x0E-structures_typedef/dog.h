#ifndef SCOPE
#define SCOPE

/**
 * struct dog - Dog
 * @name: pointer to name
 * @owner: pointer to owner
 * @age: age of dog
 *
 * Description: dog file
 */

struct dog
{
char *name, *owner;
float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
