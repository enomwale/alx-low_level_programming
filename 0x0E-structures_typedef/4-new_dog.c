#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: length of the string
 */
int _strlen(char *s)
{
int j;
j = 0;
while (s[j] != '\0')
{
j++;
}
return (j);
}
/**
 * *_strcpy - replicates the string that src is pointing at
 * including the final null byte (0)
 * to the buffer where dest is pointing
 * @dest: pointer to the buffer where the string is copied
 * @src: to be copied string
 * Return: the destination pointer
 */
char *_strcpy(char *dest, char *src)
{
int len, j;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (j = 0; j < len; j++)
{
dest[j] = src[j];
}
dest[j] = '\0';
return (dest);
}
/**
 * new_dog - establishes a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: pointer to the fresh canine (success), else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len1, len2;
len1 = _strlen(name);
len2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
