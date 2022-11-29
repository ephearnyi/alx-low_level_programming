#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning
 * @head:pointer to the beginning
 * @n: the int of the new node
 * Return: Address of the new element, NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
