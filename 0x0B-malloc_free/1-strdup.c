#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to new mem space containing a string
 * @str: the string
 * Return: the pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	copy = malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';
	return (copy);
}
