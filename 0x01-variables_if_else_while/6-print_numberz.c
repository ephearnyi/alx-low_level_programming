#include <stdio.h>

/**
 * main - using putchar to print int
 * Return: (0) Successful
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
