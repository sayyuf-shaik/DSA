#include <stdio.h>
#include <stdlib.h>
//Create a Node
struct Node {
	int data;
	struct Node *next;
};

int main(){
	//Create three nodes
	struct Node *first = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;
	
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	//Add data in node and link them to the next nodes
	//Note: -> is used since accessing structure members through pointers
	first->data = 1;
	first->next = second;
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	return 0;
}
