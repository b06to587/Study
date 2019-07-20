#include <stdio.h>
#include <stdlib.h>
# define MAX 1004

int compare(const int * a , const int *b){
	return *a < *b ? -1 : (*a > *b ? 1 : 0);	
}


int main(){
	int n,i,a[MAX];
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
	 	scanf("%d", &a[i]);
	}
	qsort(a,n,sizeof(int),compare);
	
	for(i=0;i<n;i++){
	 	printf("%d\n", a[i]);
	} 
} 
