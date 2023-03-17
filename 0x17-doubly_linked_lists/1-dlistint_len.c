#include"lists.h"
/**
 * dlistint_len - returns number of nodes in a dl
 * @h: head of dlistint_t list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
