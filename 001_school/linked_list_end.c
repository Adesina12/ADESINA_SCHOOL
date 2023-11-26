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
void insert_end();
struct node
{
	int data;
	struct node* next;
};
int main(void)
{
	struct node* tail = NULL;
	
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
	
	print_from(first);
	insert_end(&tail, 50);
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
void insert_end(struct node** tail, int last)
{
	struct node* new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = last;
	new->next = NULL;

	printf("%d\n", new->data);
}
