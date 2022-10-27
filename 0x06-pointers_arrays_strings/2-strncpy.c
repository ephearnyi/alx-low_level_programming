#include "main.h"

/**
 * _strncpy - copies strings
 * @dest: first string
 * @src: second string
 * @n: Lenght of int
 * Return: pointer of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
