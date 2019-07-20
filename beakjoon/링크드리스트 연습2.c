#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
	struct NODE* next;
	int data;
}node;

node* createNode(int data){
	node* newNode = malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
}

void appendNode(node** head, node* newNode){

	if(*head == NULL){
		*head = newNode;
	}else{                     
		node* tail = head;
		while(tail->next != NULL){
			tail = tail->next;
		}
		tail->next = newNode;
	}
}

node* getNodeAt(node* head, int location){
	node* cur = head;
	while(cur!= NULL && --location >=0){
		cur = cur->next;
	}
}

node* removeNode(node** head, node* remove){
	if(*head == remove){
		*head = remove->next;
	}else{
		node* cur = *head;
		while( cur != NULL && cur->next != remove){
			cur= cur->next;
		}
		if(cur!=NULL){
			cur->next = remove->next;
		}
	}
}

int main(){
	int i =0;
	int count = 0;
	node* List = NULL;
	node* newNode = NULL;
	node* findNode = NULL;
	for(i=0;i<8;i++){
		newNode = createNode(i);
		appendNode(&List, newNode);
	}
	node* curr = List->next;
	findNode = getNodeAt(List,3);
	printf("%d", findNode->data);
	
	return 0;
}
