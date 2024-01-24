#ifndef DOG
#define DOG

/**
 * struct dog - Structure of currently 3 members
 * @name: String variable, member one.
 * @owner: String variable, member two.
 * @age: Float type element, last member.
 *
 * Description: This structure will store 3 key information on a given puppy
 * Cute little ones or big dwags like Bond :) Spy x Family style.
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
