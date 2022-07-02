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
