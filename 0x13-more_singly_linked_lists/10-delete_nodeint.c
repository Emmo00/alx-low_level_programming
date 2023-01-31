#include"lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index of a listint_t list
 * @head: pointer to head of the linked list
 * @index: index of node to delete
 * Return: 1 (success), -1 (failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *tmp;

	node = *head;
	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
	} else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (node == NULL)
				return (-1);
			node = node->next;
		}
		if (node == NULL)
			return (-1);
		tmp = node->next;
		node->next = tmp->next;
		free(tmp);
	}
	return (1);
}
