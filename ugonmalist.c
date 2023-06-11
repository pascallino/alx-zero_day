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
void insertNodeinSortedList(ugonma **head, int age);
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

/* 100 -> 200 -> 300 -> 400 -> 500 -> NULL */
void insertNodeinSortedList(ugonma **head, int age)
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
		while (curr->next != NULL && curr->next->age <= age)
		{
			        curr = curr->next;
		}
		newnode->next = curr->next;
		curr->next = newnode;
	}
}

/* 100 -> 200 -> 300 -> 400 -> 500 -> NULL */
void insertNodeinSortedList(ugonma **head, int age)
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
		while (curr->next != NULL && curr->next->age <= age)
		{
			        curr = curr->next;
		}
		newnode->next = curr->next;
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


int main(void)
{
ugonma *head = NULL;

addnewnode(&head, 100);
addnewnode(&head, 200);
addnewnode(&head, 300);
addnewnode(&head, 400);
addnewnode(&head, 500);
addnewnode(&head, 6000);
addnewnode(&head, 4000);

printlinklist(head);

insertNodeinSortedList(&head, 1500);

printlinklist(head);
return (0);
}







