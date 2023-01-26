#include "lists.h"
/**
 * list_len - return number of elements of a list_t list
 * @h: pointer to the head pointer to the linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	list_t *head;
	int n;

	head = (list_t *)h;
	n = 0;
	while (head != NULL)
	{
		n++;
		head = head->next;
	}
	return (n);
}
