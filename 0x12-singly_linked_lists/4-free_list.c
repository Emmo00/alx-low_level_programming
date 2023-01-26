#include "lists.h"
/**
 * free_list - frees a list_t ll
 * @head: head of ll
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p;

	p = head;
	if (p == NULL)
		return;
	free_list(head->next);
	free(p->str);
	free(p);
}
