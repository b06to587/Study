#include <stdio.h>

int main(){
	int n,m,k,ans =0;
	scanf("%d %d %d", &n, &m, &k);


	if (n+m<=k)
		printf("0\n");
	else{
		if(n/2 >=m )
		ans	= m;
		else if(n/2 < m)
		ans = (n/2);
		
		k -= (n + m) - ans * 3; // rest 제외 충원될인원 
        if (k > 0) 
		ans = (ans *3 - k)/ 3;
	}
		
		printf("%d", ans);
	return 0;
}
