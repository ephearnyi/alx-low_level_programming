#include "main.h"
/**
 * malloc_checked - allocates a memory space or terminate with status 98
 * @b: memory of interest
 * Return: pointer to the alloc mem
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
