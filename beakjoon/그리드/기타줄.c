#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MIN(a,b) (a<b? a:b)
	
int main(){
	int n,m,i,ans=0,set_price, one_price, min_set_price = 1000, min_one_price = 1000;
	scanf("%d %d", &n,&m);
	
		for(i =0 ; i<m; i++){
			scanf("%d %d",&set_price ,&one_price);
			min_set_price = MIN(set_price,min_set_price);
			min_one_price = MIN(one_price,min_one_price);
		}
		
	
	
		if(n<6){
		ans = MIN(min_set_price,min_one_price*n);
		}else {
		min_set_price = MIN(min_set_price, min_one_price*6);
		ans += min_set_price * (n/6);
		ans += MIN(min_set_price,min_one_price * (n%6));
		}
		
		printf("%d",ans);
		
	return 0;
}
