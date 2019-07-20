#include <stdio.h>

int main(){
	int a,b,c,i,max, line1, line2;
	scanf("%d %d %d", &a, &b, &c);
	while(a!=0 && b!=0 && c!=0) {
		if(b * b + c *c == a*a || b * b + a *a == c*c||a * a + c *c == b*b){
			printf("right\n");
		}else{
			printf("wrong\n");
		}

	scanf("%d %d %d", &a, &b, &c);
}
	
	return 0;
}

