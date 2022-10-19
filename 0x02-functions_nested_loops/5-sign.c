#include "main.h"
/**
 * print_sign - print the sign befor numbers
 * @n: number declaration
 *
 * Return: 1 if n is greater than zero, 0 if > zero -1 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
