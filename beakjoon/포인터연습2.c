#include <stdio.h>

int main(){
	
	int a = 3;
	int *p = &a;
	int **pp = &p;
	
	printf("%d\n", a); //3
	printf("%p\n\n", &a); //林家 
	
	printf("%p\n", p); // a狼 林家 
	printf("%d\n", *p); // 3
	printf("%p\n\n", &p); // 
	
	printf("%p\n", pp);	// p狼林家 
	printf("%p\n", *pp);//a狼 林家 
	printf("%p\n\n", &pp);

	
	printf("%d\n", **pp);
}
