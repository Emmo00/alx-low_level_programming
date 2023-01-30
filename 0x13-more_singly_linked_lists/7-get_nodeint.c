#include"lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t ll
 * @head: head of ll
 * @index: index of node to return
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
	}
	return (node);
}
