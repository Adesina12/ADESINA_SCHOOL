#include <stdio.h>
#include <stdlib.h>

/**
 * create a struct containing int data and next pointer
 * draw the nodes
 * allocate memory to the nodes
 * insert data value to the nodes
 * link the nodes together.
 */
void print_from();
void delete_beginning();
struct node
{
	int data;
	struct node* next;
};
int main(void)
{
	
	struct node* first;
	struct node* second;
	struct node* third;
	struct node* fourth;

	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));

	first->data = 10;
	second->data = 20;
	third->data = 30;
	fourth->data = 40;

	first->next = second;
	second->next = third;
	third->next = fourth;
	fourth->next = NULL;
	
	delete_beginning(&first);
	print_from(first);
	return (0);
}
void print_from(struct node* ptr)
{
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}
void delete_beginning(struct node** del, struct node* ptr))
{
	struct node* previous = *del;
	struct node* current = *del;	

	if (ptr == first)
	{
		*del = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		previous = current;
		current = current->link;

		previous->link=current->link;
		free(current);
		current = NULL;
	}
}
