#include "list.h"

/**
 * reverse_lintist - reverse a linked list
 * @head: pointer to first node in the list
 * Return: pointer to first node in the new list
 */

listint_t *reverse_listint(listint_t **head);
{
	listint_t *prev = NULL;
	listint_t *next = NUL;

	while (*head)
	{
		next = (*head)->next;
		(*haed)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}`
