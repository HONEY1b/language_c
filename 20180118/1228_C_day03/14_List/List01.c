#include<stdio.h>
#include<stdlib.h>

struct Node{
	struct Node* next;
	int data;
};

void addList(struct Node* target, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> next = target -> next;
	newNode -> data = data;
	target -> next = newNode;
}

void removeList(struct Node* target)
{
	struct Node * removeNode = target -> next;
	target -> next = removeNode -> next;
	free(removeNode);
	removeNode = NULL;

	// target[0].next == target -> next == (*target).next

}

void main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node));
	struct Node* temp;

	head -> next = NULL;
	addList(head, 10);
	addList(head, 20);
	addList(head, 30);
	addList(head, 40);
	removeList(head);

	temp = head -> next;
	while(temp != NULL){
		printf("%d \n", temp -> data);
		temp = temp -> next;
	}

}