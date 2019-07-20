#include <stdio.h>
#include <stdlib.h>

 typedef struct NODE {
	struct NODE *next;
	int data;
}NODE;

void addFirst(struct NODE *target, int data){
	NODE *newNode = malloc(sizeof(NODE));
	newNode->next = target->next;
	newNode->data = data;
	
	target->next = newNode;
	
}

void RemoveFirst(struct NODE *target){
	NODE *removeNode = target->next;
	target->next = removeNode->next;
	
	free(removeNode);
}

NODE *findNode(NODE *node, int data){
	if(node == NULL){
		return NULL;
	}
	NODE *curr = node->next;
	while(curr!=NULL){
		if(data == curr->data){
			return curr;
		}
		curr = curr->next;
	}
	return NULL;
}

void removeNode(NODE *node , int data){
	NODE *curr = node->next;
	while(curr != NULL){
		if(curr->next->data == data){
			NODE *deletenode = curr->next;
			if(deletenode->next != NULL)
			curr->next = deletenode->next;
			else{
				curr->next  = NULL;
			}
			return;
		
		}
		curr= curr->next;
	}
}

int main()
{
    int i,numArr[10] = { 0, };
    int removeNum;

    scanf("%d %d %d %d %d",
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]
    );

    scanf("%d", &removeNum);
 
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;

    for ( i = 0; i < 5; i++)
    {
        addFirst(head, numArr[i]);
    }

    removeNode(head, removeNum);

    struct NODE *curr = head->next;

    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }

    curr = head->next;

    while (curr != NULL)
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }

    free(head);

    return 0;
}
