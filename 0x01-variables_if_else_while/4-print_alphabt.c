#include <stdio.h>

/**
 * main - print the alphabet in lower case
 * except q and e
 * Return: (0) Successful
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
