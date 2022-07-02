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
 * main - check the code
 *
 * Return: Always 0.
 */
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
