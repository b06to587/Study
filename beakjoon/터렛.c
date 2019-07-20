#include <stdio.h>

int main(){
	int n,i,x1,x2,y1,y2,d,r1,r2,d2,d3;
	
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1,&x2, &y2, &r2);
		d = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
		d2 = (r1+r2)*(r1+r2);
		d3 = (r2-r1)*(r2-r1);
		if(d2>d && d>d3){
			printf("2\n");
		}
		else if((d2 == d || d3 == d) && d!=0){
			printf("1\n");
		}else if(d3 > d || d > d2)	{
			printf("0\n");
		}else if(d==0 && r1 == r2){
			printf("-1\n");
		}
		
	}
	
	return 0;
}
