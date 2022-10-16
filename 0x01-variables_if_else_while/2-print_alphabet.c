#include <stdio.h>
/* other headers appear here*/

/**
 * main - prints alpha in lower and upper case
 * Return: (0) successful
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
