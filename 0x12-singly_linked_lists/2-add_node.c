#include"lists.h"
/**
 * add_node - add a new node to the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to add to node
 * Return: pointer to the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup((char *)str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		new->next = (*head)->next;
		(*head)->next = new;
	}
	return (new);
}
