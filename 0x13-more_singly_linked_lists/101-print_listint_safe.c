#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: a pointer to the address of the head of the linked list
 * Return: no return
 */

void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
