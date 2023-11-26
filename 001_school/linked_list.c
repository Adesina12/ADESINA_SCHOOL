#include <stdio.h>
#include <stdlib.h>

typedef struct node *nodePtr;

//the nodePtr is a pointer to the struct node that we want to create..

struct node
{
	int data;
	nodePtr next;
};

// A struct node is box that contains the data and the node pointer.

typedef struct node node;
int main(void)
{
	nodePtr firstBox = NULL;

	firstBox = malloc(sizeof(node));
	firstBox->next = NULL;
	firstBox->data = 61;
	//Now, you've successfully done with the first created box
	//
	//Now, let's create another box.
	firstBox = malloc(sizeof(node));
	firstBox->next->next = NULL;
	firstBox->next->data = 62;
	//You've successfully done with the second created box
	//
	//Now, suppose you want the second box to share the same (direct) parent with the first box, then you declare a temporary box.
	
	nodePtr temp;
	temp = malloc(sizeof(node));
	temp->next = firstBox;
	firstBox = temp;

	return (0);
}
