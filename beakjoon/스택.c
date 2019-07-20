#include <stdio.h>
#include <string.h>
#define LEN 10000

typedef struct _stack{
	int arr[LEN];
	int top;
}Stack;

void StackInit(Stack *pstack){
	pstack->top = -1;
}

int IsEmpty(Stack *pstack){
	if(pstack->top == -1)	return 1;
		return 0;	
}
int Size(Stack *pstack){
	return pstack->top+1;
}
int IsFull(Stack *pstack){
	if(pstack->top+1 >= LEN) return 1;
	return 0;
}
int Push(Stack *pstack, int data){
	if(IsFull(pstack) == 1) return;
	
	pstack->top += 1;
	pstack->arr[pstack->top] = data;
}

int Pop(Stack *pstack){
	 if(IsEmpty(pstack) == 1) return -1;
	 
	 return pstack->arr[pstack->top--];
}

int Peek(Stack *pstack){
	if(IsEmpty(pstack) == 1) return -1;
	return pstack->arr[pstack->top];
}

int main(){
	int i,n, num;
	char s[6];
	Stack stack;
	scanf("%d", &n);
	
	StackInit(&stack);
	
	for(i=0;i<n;i++){
		scanf("%s",&s);
		fgetc(stdin);
		if(strcmp(s,"push")==0){
			scanf("%d", &num);
			fgetc(stdin);
			Push(&stack, num);
		}
		
		if(strcmp(s,"pop")==0){
			printf("%d\n",Pop(&stack));
		}
		
		if(strcmp(s,"top")==0){
			printf("%d\n",Peek(&stack));
		}
		
		if(strcmp(s,"size")==0){
			printf("%d\n",Size(&stack));
		}
		
		if(strcmp(s,"empty")==0){
			printf("%d\n",IsEmpty(&stack));
		}
	}
	return 0;
}
