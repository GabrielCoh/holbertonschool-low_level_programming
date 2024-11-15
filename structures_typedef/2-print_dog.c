#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if ((*d).age == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if ((*d).owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("nil\n");
	}

}