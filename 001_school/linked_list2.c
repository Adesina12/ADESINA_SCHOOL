#include <stdio.h>
#include <stdlib.h>

void display();

struct node
{
	int data;
	struct node* next;
};

int main(void)
{
	// Here we need to create the nodes
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;

	// Let's create memory inside each of the nodes
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));

	// We want to insert value into the nodes
	first -> data = 10;    // First data is equal to 10
	second -> data = 20;
	third -> data = 30;
	fourth -> data = 40;

	// Now, we want to link the nodes together
	first -> next = second;    // First next is equal to second
	second -> next = third;
	third -> next = fourth;
	fourth -> next = NULL;

	display(first);

	return (0);
}

void display(struct node* ptr)
{
	printf("Linked list elements are:");
	while (ptr != NULL)
	{
		printf(" %d ", ptr -> data);
		ptr = ptr -> next;
	}

	putchar('\n');
}
