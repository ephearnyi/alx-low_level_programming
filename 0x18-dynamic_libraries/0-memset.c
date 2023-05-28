#include "main.h"

/**
 * _memset - function to fill n bytes pointed by s with a constant byte of b
 * @n: bytes of the memory pointer
 * @s:memory pointer
 * @b: constant byte
 * Return: a pointer to the mem of @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
