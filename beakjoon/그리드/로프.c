#include <stdio.h>
#include <stdlib.h>

int compare(const int *a, const int *b){
	return *a < *b ?1 : (*a > *b ? -1: 0);
}

int main(){
	int i,n,k=0, d[100000] = {0};
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&d[i]);
	qsort(d,n,sizeof(int),compare);
	
	for(i=0;i<n;i++) 
	{
		if(k<d[i]*(i+1)){
			k = d[i] * (i+1);
		}
	}
	
	printf("%d", k);
	return 0;
	
}
