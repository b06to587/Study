#include <stdio.h>
long long a[91];
int main(){
	int n;
	scanf("%d", &n);
	printf("%lld", fibo(n));
	return 0;
}

int fibo(int n){
	int i,sum = 0;
	a[0] = 0;
	a[1] = 1;
	for(i=2;i <= n;i++){
		a[i] = a[i-1] + a[i-2];
	}
	return  a[n];
}
