#include"lists.h"
/**
 * sum_listint - return the sum of all the data (n) of the listint_t ll
 * @head: head of the linked list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
