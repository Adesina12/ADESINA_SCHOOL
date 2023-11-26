#include <stdio.h>
#include <stdlib.h>

/**
 * create of struct of an int data and next pointer
 * Draw the nodes and name them
 * Allocate memory for the node using malloc
 * Insert data value to each of the nodes
 * Link the nodes together
 */
void insert_at_beginning();
void print_from();

struct node
{
	int data;
	struct node* next;
};

int main(void)
{
	struct node* head = NULL;

	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;

	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));

	first -> data = 10;
	second -> data = 20;
	third -> data = 30;
	fourth -> data = 40;

	first -> next = second;
	second -> next = third;
	third -> next = fourth;
	fourth -> next = NULL;

	insert_at_beginning(&head, 5);
	head -> next = first;
	print_from(head);
	return (0);
}

void print_from(struct node* ptr)
{
	while (ptr != NULL)
	{
		printf("%d\n", ptr -> data);
		ptr = ptr -> next;
	}
}

void insert_at_beginning(struct node** head, int new_data)
{
	struct node* new;
	new = (struct node*)malloc(sizeof(struct node));

	new -> data = new_data;
	new -> next = (*head);

	(*head) = new;
}
