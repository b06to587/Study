#include <stdio.h>

typedef struct _Size{
	int weight;
	int height;
}size;

int main(){
	int N,i,j;
	size s[51];
	int a[51];
	scanf("%d", &N);
	for(i=0; i < N;i++){
		a[i] = 1;
	}
	for(i=0;i<N;i++){
		scanf("%d %d", &s[i].weight, &s[i].height);
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
				if(s[i].height < s[j].height && s[i].weight < s[j].weight){
					a[i]++;
				}
		}
	}
	
	for(i=0; i < N;i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
