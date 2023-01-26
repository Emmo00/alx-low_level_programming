#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head pointer to the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *head;
	int n;

	head = (list_t *)h;
	n = 0;
	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		n++;
		head = head->next;
	}
	return (n);
}
