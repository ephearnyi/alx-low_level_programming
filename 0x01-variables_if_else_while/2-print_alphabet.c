#include <stdio.h>
/* other headers appear here*/

/**
 * main - prints alpha in lower and upper case
 * Return: (0) successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
