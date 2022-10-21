#include "main.h"
/**
 * print_line - draw a straight line
 * @n: number of line
 *
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
