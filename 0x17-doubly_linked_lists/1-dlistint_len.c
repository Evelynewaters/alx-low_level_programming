#include "lists.h"
/**
 * dlistint_len - counts elements in linked dlistint_t
 * @h: pointer
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
