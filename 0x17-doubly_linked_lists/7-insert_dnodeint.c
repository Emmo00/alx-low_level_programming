#include"lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position
 * @h: pointer to pointer to head of ll
 * @idx: index to insert
 * @n: data of node
 * Returns: address to new node or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *tmp, *node;
    int i;

    node = malloc(sizeof(dlistint_t));
    if (node == NULL || *h == NULL)
        return (NULL);
    node->n = n;
    tmp = *h;
    for (i = 0; i < idx - 1 && tmp; i++)
    {
        tmp = (tmp)->next;
    }
    if (i != --idx)
        return (NULL);
    node->prev = (tmp);
	node->next = tmp->next;
	if (tmp != NULL)
		(tmp)->next = node;
    return (node);
}