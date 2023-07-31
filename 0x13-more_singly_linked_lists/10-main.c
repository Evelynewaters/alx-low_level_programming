#include "lists.h"

void print_and_delete(listint_t **head, unsigned int index);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head = NULL;

	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("-----------------\n");
	print_and_delete(&head, 5);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);
	print_and_delete(&head, 0);

	return (0);
}
/**
 * print_and_delete - Print and delete a node at a given index.
 * @head: Pointer to a pointer to the first node in the linked list.
 * @index: Index of the node to delete.
 */
void print_and_delete(listint_t **head, unsigned int index)
{
	listint_t *temp;

	temp = get_nodeint_at_index(*head, index);
	if (temp)
	{
		printf("Deleting node at index %u:\n", index);
		delete_nodeint_at_index(head, index);
		print_listint(*head);
		printf("-----------------\n");
	}
	else
	{
		printf("Node at index %u not found.\n", index);
	}
}
