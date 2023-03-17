#include"lists.h"
/**
 * add_dnodeint - add new node at the begining of a dlistint_t
 * list
 * @head: pointer to pointer to head of dlist
 * @n: node data
 * Return: returns the address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;
	return (node);
}
