#include "lists.h"
/**
 * listint_len - return number of elements of a listint_t list
 * @h: pointer to the head pointer to the linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	listint_t *head;
	int n;

	head = (listint_t *)h;
	n = 0;
	while (head != NULL)
	{
		n++;
		head = head->next;
	}
	return (n);
}
