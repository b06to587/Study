#include <stdio.h>
int N;
void move(int a, int b){
	printf("%d %d\n", a,b);
}
int hanoi(int n, int A, int B, int C){
	if(n==1){
		move(A,C);
	}else{
		hanoi(n-1,A,C,B);
		move(A,C);
		hanoi(n-1, B,A,C);
	}
}

int main(){
	scanf("%d", &N); 
	if(N<20){
		printf("%d\n", (1<<N)-1);
		hanoi(N,1,2,3);
	}else{
		printf("%d\n", (1<<N)-1);
	}
	
		return 0;
	}
