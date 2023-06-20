#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to a string representing the dog's name.
 * @age: Age of the dog.
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Description:
 *   This structure defines a dog and stores its name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */

