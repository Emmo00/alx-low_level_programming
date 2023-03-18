#include"lists.h"
/**
 * sum_dlistint - returns the sum of all
 * the data in a dlistint_t ll
 * @head: pointer to head of the ll
 * Return: sum of data or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
