#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; n++)
			_putchar('_');
	}
	_putchar('\n');
}
