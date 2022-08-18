#include "stdio.h"
#include "lists.h"

/**
 * print_list - Prints str from lists and returns number of nodes
 * @h: head node
 * Return - Number of nodes
 * Copyright © 2022 baccrie
 */

size_t print_list(const list_t *h)
{
	size_t number;
	list_t *ptr;

	ptr = h;
	number = 0;
	while(ptr != NULL)
	{
		if (ptr->str != NULL)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		else
		{
			printf("[0] [nil]\n");
		}

		ptr = ptr->next;
		number++;
	}

	return (number);
}


int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
