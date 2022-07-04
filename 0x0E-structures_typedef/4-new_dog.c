#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog - a function that creates a new dog
 * @name: the of name of the  dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->name = _strdup(name);

	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}

	p->age = age;
	p->owner = _strdup(owner);

	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	return (p);
}


/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, that is a duplicate of the string
 * str
 * @str: the string
 *
 * Return: The pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		ptr[len] = str[len];
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
