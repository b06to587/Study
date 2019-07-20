#include<stdio.h>
#include <string.h>
#define LEN 100000

typedef struct _Stack{
	int arr[LEN];
	int top;
}Stack;

void StackInit(Stack *pstack){
	pstack->top = -1;
}

int IsEmpty(Stack *pstack){
	if(pstack->top==-1) return 1;
	return 0;
}

int IsFull(Stack *pstack){
	if(pstack->top >= LEN){
		return 1;
	}
	return 0;
}

void Push(Stack *pstack, int data){
	if(IsFull(pstack) == 1 ){
		return 0;
	}else{
		pstack->top += 1;
		pstack->arr[pstack->top] = data;
	}
}

int Pop(Stack *pstack){
	if(IsEmpty(pstack) == 1) return 0;
	else{
		return pstack->arr[(pstack->top)--];
	}
}

int main(){
	int i, n, num, sum = 0;
	Stack stack; 
	StackInit(&stack);
	scanf("%d", &n);
	fgetc(stdin);
	
	for(i=0;i<n;i++){
		
		scanf("%d", &num);
		fgetc(stdin);
		if(num != 0){
			Push(&stack, num);
		}else if(num == 0){
			Pop(&stack);
		}
	}
	
	while(!IsEmpty(&stack)){
		sum += Pop(&stack);
	}
	
	printf("%d", sum);
	return 0;
}
