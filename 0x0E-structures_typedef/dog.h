#ifndef DOG_H
#define DOG_H
/**
 * struct Dog - type that defines details about a dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 */
struct Dog
{
	char *name;
	float *age;
	char *owner;
};
/**
 * dog_k - typedef for struct Dog
 */
typedef struct Dog dog_k;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /*DOG_H*/
