#include "lists.h"

/**
 * add_nodeint - function adding a new node at the beginning of a linked list
 * @n: data to insert in that new node
 * @head: pointer to first node in the list
 * Return: pointer to the new node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
