#include "main.h"

/**
 * _strchr - locates a char in a string
 * @c: occurrence of char
 * @s: string of interest
 * Return: pointer to the pccurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
