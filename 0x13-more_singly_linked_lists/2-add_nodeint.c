#include"lists.h"
/**
 * add_nodeint - add a new node to the beginning of a listint_t list
 * @head: head of the linked list
 * @n: value to fix
 * Return: pointer to the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
