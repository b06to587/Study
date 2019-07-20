#include <stdio.h>

int a[10] = {0,};

void up(int n){
	if(a[n] == 9){
		a[n] = 0;
		up(n+1);
	}else{
		a[n]++;
	}
}


int main(){
	
	int i,n;
	int cnt =0;
	scanf("%d", &n);
	
	a[0] =5;
	a[1] = 6;
	a[2] = 6;
	
	while(cnt != n){
		up(0);
		for(i =2; i<=10;i++){
			
			if(a[i-2] == 6 && a[i-1] == 6 && a[i] ==6){
				{
					cnt++;
					break;
				}
				
			}
		}
	}
	int flag = 0;
	for(i=9;i>=0;i--){
		if(a[i] == 0 && flag == 0){
			continue;
		}else{
			printf("%d",a[i]);
			flag =1;
		}
	}
	return 0;
}
