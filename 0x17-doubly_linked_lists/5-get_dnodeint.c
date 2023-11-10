#include "lists.h"
/**
 * get_dnodeint_at_index - Gets the node at index.
 * @head: pointer
 * @index: unsigned num
 * Return: returns the nth node of linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index == 0)
			return (head);
		head = head->next;
		index--;
	}
	return (NULL);
}
