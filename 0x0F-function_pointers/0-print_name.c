#include "function_pointers.h"

/**
 * print_name - a func that prints name
 * @name: the name
 * @f: the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
