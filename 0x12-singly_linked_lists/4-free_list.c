#include "lists.h"
#include "string.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * free_list - frees list
 * @head: head node
 * Return: head node
 *

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = tmp->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
*/
/**
 * free_list -  free a list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

	free(head->str);
	free(head);
}
