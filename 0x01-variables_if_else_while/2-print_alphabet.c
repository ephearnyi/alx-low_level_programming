#include <stdio.h>
/* other headers appear here*/

/**
 * main - Entry
 * return: (0) successful
 */

int main(void)
{
	char lc;

	for (lc = "a"; lc <= "z"; lc++);
	{
		putchar(lc);
	}
	putchar("\n");
	return (0);
}
