#include "main.h"

/**
 * set_string - sets the value of a pointer
 * @s: pointer to change
 * @to: string to change to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
