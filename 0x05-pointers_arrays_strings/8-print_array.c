#include "main.h"
#include <stdio.h>

/**
 * print_array - prints element of an array
 * @a: first int
 * @n: second int
 * Return: 0 always
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}