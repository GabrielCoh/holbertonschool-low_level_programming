#include "dog.h"

/**
 * new_dog - creates a new struct of type dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: returns NULL or pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, l, m;
	dog_t *doggy;

	n = l = 0;
	while (name[n++])
		;
	while (owner[l++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(n * sizeof(doggy->name));
	if (doggy == NULL)
		return (NULL);
	for (m = 0; m < n; m++)
		doggy->name[m] = name[m];

	doggy->age = age;

	doggy->owner = malloc(l * sizeof(doggy->owner));
	if (doggy == NULL)
		return (NULL);
	for (m = 0; m < l; m++)
		doggy->owner[m] = owner[m];
	return (doggy);
}
