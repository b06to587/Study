#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int compare(const int *a, const int *b){
	return *a < *b ?  1 : (*a > *b ? -1 : 0);
}

int main(){
	int i=0, sum= 0, z=0,n2;
	int NUM[MAX] ={0};
	
	char n;
	n = getchar();
	while(n != '\n' && n != EOF){
		n2 = n - '0';
		NUM[z] = n2;
		z++;
		n = getchar();
	}
	
		for(i=0;i<sizeof(NUM)/sizeof(int);i++){
			sum += NUM[i];
		}	
		qsort(NUM, sizeof(NUM)/sizeof(int), sizeof(int),compare);	
		if(sum%3 == 0 && NUM[z-1] == 0){
				for(i=0;i<z;i++){	
					printf("%d",NUM[i]);
				}
		}else{
			printf("%d", -1);	
		}
	
	return 0;
}
