#include"lists.h"
/**
 * add_nodeint_end - add a new node to the end of a listint_t list
 * @head: head of the linked list
 * @n: value
 * Return: pointer to the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
	return (new);
}
