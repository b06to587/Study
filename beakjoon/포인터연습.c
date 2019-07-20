#include <stdio.h>
int main(){
	int a[5] = {1,2,3,4,5};
	int *p = a;
	int i;
	
	for (i=0; i<5;i++){
		printf("0x%p 0x%p %d\n ", &a[i], &p[i], p[i]);
	}
	printf("%d", *p+1 ); 
}
