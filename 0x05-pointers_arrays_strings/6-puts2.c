#include "main.h"
/**
 * puts2 - prints fro first char of a str
 * @str: char to check
 * Return: 0 always
 */
void puts2(char *str)
{
	int word;

	for (word = 0; str[word] != '\0'; word++)
		if (word % 2 == 0)
			_putchar(str[word]);
	_putchar('\n');
}
