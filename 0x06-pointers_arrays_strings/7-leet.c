#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string ti encode
 * Return: address of s
 */
char leet(char *s)
{
	int i = 0, j;
	char a[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (s[i] == a[j] || s[i] - 32 == a[j])
				s[i] = j + '0';
		}
		i++;
	}
	return (s);
}
