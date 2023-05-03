#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: linked list to be searched for
 * Return: address of new node where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head);
{
	listint_t *slow = head;
	listint_ *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
