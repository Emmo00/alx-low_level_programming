#include"lists.h"
/**
 * add_dnodeint_end - add a node to the end of a
 * dlistint_t linked list
 * @head: pointer to head of ll
 * @n: node data
 * Return: address to new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	node->prev = tmp;
	tmp->next = node;
	return (node);
}
