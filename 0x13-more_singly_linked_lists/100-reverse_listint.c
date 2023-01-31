/**
 * reverse_listint - reserses a listint_t linked list
 * @head: head of the linked list
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	tmp->next = *head;
}
