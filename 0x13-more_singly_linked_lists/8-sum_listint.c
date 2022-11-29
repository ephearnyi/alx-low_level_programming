#include "lists.h"

/**
 * sum_listint -Calc the sum of all the data
 * @head: A pointer to the head of the list
 * Return: The sum of all data, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
