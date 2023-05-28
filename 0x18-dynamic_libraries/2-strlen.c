#include "main.h"
/**
 * _strlen - print length of a string
 * @s: char to check
 * Description: this will return string length
 * Return: 0 always
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
