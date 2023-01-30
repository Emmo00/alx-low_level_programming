#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head pointer to the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *head;
	int n;

	head = (listint_t *)h;
	n = 0;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		n++;
		head = head->next;
	}
	return (n);
}
