#include <stdio.h>

int main(){
	
	int a = 3;
	int *p = &a;
	int **pp = &p;
	
	printf("%d\n", a); //3
	printf("%p\n\n", &a); //�ּ� 
	
	printf("%p\n", p); // a�� �ּ� 
	printf("%d\n", *p); // 3
	printf("%p\n\n", &p); // 
	
	printf("%p\n", pp);	// p���ּ� 
	printf("%p\n", *pp);//a�� �ּ� 
	printf("%p\n\n", &pp);

	
	printf("%d\n", **pp);
}
