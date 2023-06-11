#include <stdio.h>
#include <stdlib.h>
/* define the struct */
typedef struct Node
{
	        int age;
		        struct Node *next;
} ugonma;

void addnewnode(ugonma **head, int age);
void printlinklist(ugonma *head);

/* 100 -> 200 -> 300 -> 400 -> 500 -> NULL */
void addnewnode(ugonma **head, int age)
{
	ugonma *newnode = NULL;
	newnode =(ugonma *)malloc(sizeof(ugonma));
	if (newnode == NULL)
		        return;
	/* NULL */
	/* 100 -> NULL */
	/* 100 -> 200 -> NULL */
	/* 100 -> 200 -> 300 -> NULL */

	newnode->age = age;
	newnode->next = NULL;
	if  (*head == NULL) /* this will only work for 100 only */
	{
		        *head = newnode;
	}
	else /* this is for subsequent nodes like 200, 300 , 400 etc */
	{
		ugonma *curr = *head;

		while (curr->next != NULL)
		{
			        curr = curr->next;
		}
		curr->next = newnode;
	}

}
void printlinklist(ugonma *head)
{
	ugonma *curr = head;
	while(curr)
	{
		        printf("%d --> ", curr->age);
			        curr = curr->next;

	}



	printf("NULL\n");
}
void reverselist(ugonma **head)
{
ugonma *prev = NULL; //NULL
ugonma *Next = *head; //5
while (*head) 
{
Next = (*head)->next; //4
(*head)->next = prev; //NULL<-5
prev = *head;// ADDRESS OF 5 NULL<-5<-4
*head = Next; // HEAD IS 4
}
*head = prev;

}



int main(void)
{
	ugonma *head = NULL;

	addnewnode(&head, 1000);
	addnewnode(&head, 200);
	addnewnode(&head, 300);
	addnewnode(&head, 400);
	addnewnode(&head, 500);
	addnewnode(&head, 6000);
	addnewnode(&head, 4000);
	addnewnode(&head, 2000);

	printlinklist(head);
	reverselist(&head);
	 printlinklist(head);
	return (0);
}
