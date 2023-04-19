#ifndef DOG_H
#define DOG_H
/**
 * struct dog - poppy
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Description: define type dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /* DOG_H */
