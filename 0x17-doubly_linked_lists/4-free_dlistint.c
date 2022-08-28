#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head) {
	dlistint_t *ptr;

	ptr = head;
	while (ptr->next != NULL) {
		head = ptr->next;
		free(ptr->next);
		free(ptr->prev);
		free(ptr);
		ptr = head;
	}

	free(ptr->next);
	free(ptr->prev);
	free(ptr);
}
