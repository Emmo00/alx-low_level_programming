#include "lists.h"
/**
 * free_listint - frees a listint_t ll
 * @head: head of ll
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
