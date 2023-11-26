#include <stdio.h>
#include <stdlib.h>

/**
 * create struct
 * draw node
 * allocate memory
 * insert data
 * link
 */

void print_from();
void insert_middle();

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

	insert_middle(first, 5);
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
void insert_middle(struct node* prev_node, int mymy)
{
	struct node* new;
	new = (struct node*)malloc(sizeof(struct node));
	new->data = mymy;
	new->next = prev_node->next;
	prev_node->next = new;
}

