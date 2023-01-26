#include"lists.h"
/**
 * add_node - add a new node to the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to add to node
 * Return: pointer to the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	list_t *tmp;
	list_t *new;

	p = (list_t *)malloc(sizeof(list_t));
	tmp = (list_t *)malloc(sizeof(list_t));
	new = (list_t *)malloc(sizeof(list_t));
	if (p == NULL || tmp == NULL || new == NULL)
		return (NULL);
	new->str = strdup((char *)str);
	new->len = strlen(str);
	if (*head == NULL)
	{
		*head = p;
		(*head)->next = NULL;
	}
	tmp = (*head)->next;
	new->next = (*head)->next;
	(*head)->next = new;
	free(p);
	free(tmp);
	return (new);
}
