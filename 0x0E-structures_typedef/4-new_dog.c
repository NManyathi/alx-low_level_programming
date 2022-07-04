#include "dog.h"


/**
*_strlen - returns length of
*a string
*@str: string to be counted
*Return: returns length of string
*/
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}


/**
*_strcopy - copy string pointed by src
*into dest variable
*@dest:buffer storing string copy
*@src: buffer storing string to copy
*Return:returns copied string
*/
char *_strcopy(char *dest, char *src)
{
int index = 0;

for (; src[index] ; index++)
dest[index] = src[index];

dest[index] = '\0';
return (dest);
}




/**
*new_dog - creates a new dog
*@name: name of new dog
*@age: age of new dog
*@owner: owner of new dog
*Return: returns NULL in case
*of failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (!new_dog || !name || !owner)
	{
		return (NULL);
	}
	n = malloc(_strlen(name) + 1);
	if (!n)
	{
		return (free(new_dog), NULL);
	}
	n = _strdup(name);
	new_dog->name = n;
	o = malloc(_strlen(owner) + 1);
	if (!o)
	{
		return (free(new_dog->name), free(new_dog), NULL);
	}
	o = _strdup(owner);
	new_dog->owner = o;
	new_dog->age = age;
	return (new_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */

int _strlen(char *s)
{
	char *p = s;

	while (*s)
	{
		s++;
	}
	return (s - p);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: copied string
 */

char *_strdup(char *str)
{
	int i, len;
	char *copy;

	if (!str)
	{
		return (NULL);
	}
	len = _strlen(str);
	copy = malloc(sizeof(char) * len + 1);
	if (!copy)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}
	copy[i] = 0;
	return (copy);
}
