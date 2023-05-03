#include "lists.h"

/**
 * listint_n - returns the number of elements in a linked list
 * @h: linked lists of tytpes listint_t to traverse
 * Return: num of nodes
 */

size_t listint_len(const listint_t *h);
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}