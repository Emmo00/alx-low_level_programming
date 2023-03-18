#include"lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t ll
 * @head: pointer to head of ll
 * @index: index of node to return
 * Return: pointer to nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    int i;

    for (i = 0; i < index && head != NULL; i++)
    {
        head = head->next;
    }
    if (i != index)
        return (NULL);
    return (head);
}