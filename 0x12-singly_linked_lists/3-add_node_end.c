#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node to the end of a list
 * @head: the linked list
 * @str: the string to add to the node
 * Return: the add of the new list or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
			return (NULL);

		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new_list;
			return (temp);
		}
	}
	return (NULL);
}

/**
 * _strlen - returns len of str
 * @s: the string
 * Return: the len
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
