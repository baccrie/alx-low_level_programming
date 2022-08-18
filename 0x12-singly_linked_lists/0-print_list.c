#include "stdio.h"
#include "lists.h"

/**
 * print_list - Prints str from lists and returns number of nodes
 * @h: head node
 * Return: Number of nodes
 * Copyright © 2022 baccrie
 */

size_t print_list(const list_t *h)
{
	size_t number;
	const list_t *ptr;

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
			printf("[0] (nil)\n");
		}
		ptr = ptr->next;
		number++;
	}
	return (number);
}
