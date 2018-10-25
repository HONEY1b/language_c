#include <stdio.h>
#include <stdlib.h>
struct NODE{
	struct NODE* next;
	int data;
};
void addList(struct NODE* target , int data){
	struct NODE* newNode = 
		(struct NODE*)malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;
	target->next = newNode;
}
void removeList(struct NODE* target){
	struct NODE * removeNode = target[0].next;
	target->next = (*removeNode).next;
	free(removeNode);
	removeNode =NULL;
}
void main(){
	struct NODE* head = 
		(struct NODE*)malloc(sizeof(struct NODE));
	struct NODE* temp;
	head->next = NULL;
	addList(head , 10);
	addList(head , 20);
	removeList(head);
	addList(head , 30);
	addList(head , 40);
	removeList(head);
	temp = head->next;
	while(temp != NULL){
		printf("%d\n" , temp->data);
		temp = temp->next;
	}
}