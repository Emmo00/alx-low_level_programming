#include "lists.h"
/**
 * free_listint2 - frees a listint_t ll
 * @head: pointer to head of ll
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;
	free_listint2(&(*head)->next);
	free(*head);
	*head = NULL;
}
