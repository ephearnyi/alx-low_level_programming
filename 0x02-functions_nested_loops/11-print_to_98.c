#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			print("%d, ", n--);
		print("%d\n", n);
	}
	else
	{
		while (n < 98)
			print("%d, ", n++);
		print("%d\n", n);
	}
}
