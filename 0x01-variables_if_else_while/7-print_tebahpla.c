#include <stdio.h>

/**
 * main - prints lower case aphabet is reverse
 * Return: (0) successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
