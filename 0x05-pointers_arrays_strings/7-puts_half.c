#include "main.h"
/**
 * puts_half - print half of a string
 * @str: character of interest
 * Return: 0 always
 */
void puts_half(char *str)
{
	int word = 0, n;

	while (str[word] != '\0')
		word++;
	if (word + 1 % 2 != '0')
		n = (word - 1) / 2;
	else
		n = (word / 2);
	n++;

	for (word = n; str[word] != '\0'; word++)
		_putchar(str[word]);
	_putchar('\n');
}
