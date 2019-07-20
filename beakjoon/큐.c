#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000;

int q[10000];
int start =0, end =0, count =0;

void push(int x){
	q[end++] = x;
	++count;
}

void pop(){
	if(count != 0){
		printf("%d\n", q[start++]);
	}
}
void size(){
	printf("%d\n", count );
} 
void empty(){
	if (count ==0)
		return 1;
	return 0;
}


int main(){
int i,n;
char s[6];
	for(i=0;i<n;i++){
		scanf("%s", s);
		if(!strcmp(s,"push"))	{
			scanf("%d", &data);
		}else if(!strcmp(s,"pop")){
			
		}else if(!strcmp(s,"size")){
			
		}else if(!strcmp(s,"empty")){
			
		}else if(!strcmp(s,"front")){
			
		}else if(!strcmp(s,"back")){
			
		}
	}	
}
