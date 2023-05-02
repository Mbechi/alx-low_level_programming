#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node in linked list
 * Return: num of elements in freed list
 */

listint_t *find_listint_loop(listint_t *head);
{
	size_t len = 0;
	int diff;
	listint_t *tep;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h = (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(h);
			*h = NULL;
			len++:
			break;
		}
	}

	*h = NULL;
	return (len);
}
