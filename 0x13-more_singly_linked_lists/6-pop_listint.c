#include"lists.h"
/**
 * pop_listint - deletes the head node of a listint_t ll
 * @head: head of the ll
 * Return: the head of ll data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
