#include "lists.h"
/**
 * sum_listint - Entry Point
 * @head: head
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int t = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		t += head->n;
		head = head->next;
	}

	return (t);
}
