#include <stdio.h>

int sosu(int n){
	int i;
	for(i=2; i*i<=n;i++){
		if(n%i ==0)
			return 0;
		}
	return 1;
}

int main(){
	int i,t,n,j,a,b;
	scanf("%d", &t);
	for(i=0;i<t;i++){	
		scanf("%d", &n);
		for(j=n/2;j>=2;j--){
			a = j;
			b = n-j;
			if(sosu(a) ==  1 && sosu(b)==1){
				printf("%d %d\n", a,b);
				break;
			} 
		}
	}
	return 0;
}
