#include <stdio.h>

int main(){
	int i,day,t,x,y,m,n;

	scanf("%d", &t);
	
	while (t--){

		scanf("%d %d %d %d", &m, &n, &x,&y);

		for(i=0;i<= n;i++){
			x = x + m*i;
			if(y != n){
				day = x%n;
			}else{
				day = n;
			}
		
			if(day == y){
				break;
			}else if(i==n && day != y){
				x = -1;
			}
		}
		printf("%d\n", x);
	}
	return 0;
}
