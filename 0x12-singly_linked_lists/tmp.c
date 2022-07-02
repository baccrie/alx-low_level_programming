#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

*/
/**
 * print_list - prints the data of each node
 * @h: pointer to list head
 * Return: no of nodes in list
 */


size_t print_list(const list_t *h)
{
	size_t size;
	const list_t *tmp;

	size = 0;
	tmp = h;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", tmp->len, tmp->str);
		putchar('\n');
		size++;
		tmp = tmp->next;
	}

	return (size);
}



/**
 * list_len - function that counts nodes
 * @h: pointer to first node
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t size;
	const list_t *tmp;

	tmp = h;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}

	return (size);
}

/**
 * add_node - add nodes to list
 * @head: a double pointer pointing to a list head
 * @str: node data
 * Return: pointer to list head
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (*head);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = *head;
	*head = tmp;

	return (*head);
}


/**
 * add_node_end - add nodes to list
 * @head: a double pointer pointing to a list head
 * @str: node data
 * Return: pointer to list head
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *move;

	move = *head;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (*head);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	if (*head == NULL)
	{
		tmp->next = NULL;
		*head = tmp;
		return (*head);
	}
	while (move->next != NULL)
	{
		move = move->next;
	}
	tmp->next = NULL;
	move->next = tmp;
	return (*head);
}

int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
