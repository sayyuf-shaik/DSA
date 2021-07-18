//Program to treverse the linked list
#include <stdio.h>
#include <stdlib.h>

//Create a Node for the list
struct Node {
	int data;
	struct Node *next;
};

//function to traverse a tree

void traverse_tree(struct Node *head)
{	
	//Loop through each node untill reaches end of linked list
	//End of the linked list can be identified by checking the next to NULL
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}

int main() {
	//Create three Nodes
	struct Node *first = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;
	
	//Allocate memory through malloc
	first = (struct Node *)malloc(sizeof(struct Node));
	second = (struct Node *)malloc(sizeof(struct Node));
	third = (struct Node *)malloc(sizeof(struct Node));

	first->data = 1;
	first->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;

	traverse_tree(first);
	return 0;
}
