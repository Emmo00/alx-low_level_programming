#include"lists.h"
/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head of the linked list
 * @idx: index in the list where the new node is ito be inserted
 * @n: data of new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
