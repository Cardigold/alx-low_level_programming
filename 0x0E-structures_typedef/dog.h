#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Data of the dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 *
 * Description: define data of the dog and type of the dog’s struct
 */
typedef struct dog
{
char *name;
float  age;
char *owner;
} dog_t;
/* Additional function prototypes */
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

