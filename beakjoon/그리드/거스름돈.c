#include <stdio.h>

int main(){
	int n, cnt =0, ans = 0, i =0;
	int a[] = {500,100,50,10,5,1};
	
	
	scanf("%d", &n);
	n = 1000-n;
	while(n !=0) {
		cnt = n / a[i];
		n = n% a[i];
		
		i++;
		ans += cnt;
	}
	printf("%d", ans);

	return 0;
}
