#include <stdio.h>
int a[128][128];
int main(){
	int n,i,j;
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	CountPaper(n);
	
	return 0;
}

void CountPaper( int size){
	if(a[])
}
