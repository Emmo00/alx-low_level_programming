#include"lists.h"
/**
 * add_node_end - add a new node to the end of a list_t list
 * @head: head of the linked list
 * @str: string to add to node
 * Return: pointer to the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;
	list_t *new;

	p = (list_t *)malloc(sizeof(list_t));
	new = (list_t *)malloc(sizeof(list_t));
	if (p == NULL || new == NULL)
		return (NULL);
	new->str = strdup((char *)str);
	new->len = strlen(str);
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
