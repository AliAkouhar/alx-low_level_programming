#include "lists.h"
/**
* listint_len - a function that returns the number
*  of elements in a linked listint_t list
* @h: input
* Return: 0
*/
size_t listint_len(const listint_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
