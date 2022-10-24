#include "main.h"
/**
 * swap_int - swap values of int
 * @a: first int
 * @b: second int
 * Return: 0 always
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
