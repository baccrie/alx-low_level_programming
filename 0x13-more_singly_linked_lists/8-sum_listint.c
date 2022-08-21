#include "stdio.h"
#include "lists.h"

/**
 * sum_listint - Tmp
 * @head: Ori
 * Return: owo Baba ijebu
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
