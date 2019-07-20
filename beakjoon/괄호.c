#include <stdio.h>
#include <string.h>
#define LEN 51
typedef struct _Stack{
	char arr[LEN];
	char top;
}Stack;

void StackInit(Stack *pstack){
	pstack->top = -1;
}

int IsEmpty(Stack *pstack){
	if(pstack->top == -1){
		return 1;
	}
	return 0;
}

int IsFull(Stack *pstack){
	if(pstack->top >= LEN){
		return 1;
	}
	return 0;
} 

void Push(Stack *pstack, char data){
	if(IsFull(pstack) == 1 ){
		return;
	}
	pstack->top +=1;
	pstack->arr[pstack->top] = data;
}

char Pop(Stack *pstack) {
	if(IsEmpty(pstack) == 1)return -1;
	else
		return pstack->arr[pstack->top--];
}

int main(){
	int i,n,cnt,j=0;
	char s[LEN];
	scanf("%d", &n);
	Stack stack;

	
	for(i=0;i<n;i++){
		StackInit(&stack);
		cnt = 0;
		scanf("%s", s);
		getchar();
		for(j=0; s[j] != '\0' ;j++){
			if(s[j]=='('){
				Push(&stack,'(');
				cnt++;
			}else if(s[j]==')'){
				Pop(&stack);
				cnt--;
				if(cnt < 0){
					break;
				}
			}
		}
		if(cnt >0 || cnt < 0 ){
			printf("NO\n");
		}else if(cnt == 0){
			printf("YES\n");
		}
	}

	return 0;
}
