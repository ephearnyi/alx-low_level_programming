#include "main.h"

/**
 * _memcpy - function to copy memory from one area to another
 * @n: bytes
 * @src: memory source
 * @dest: memory destination
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
