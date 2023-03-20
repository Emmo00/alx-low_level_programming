#include"lists.h"
/**
 * delete_dnodeint_at_index - delets a node at index
 * @head: pointer to pointer to head of the ll
 * @index: index to delete
 * Return: 1 (success) -1 (failed)
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	tmp = *head;
	if (tmp == NULL)
			return (-1);
	for (; index > 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}