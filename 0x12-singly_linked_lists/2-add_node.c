#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node to the start of a list
 * @head: the head
 * @str: the string
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}

/**
 * _strlen - returns len of a str
 * @s: the string
 * Return: the count
 */

int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}
