#include <stdio.h>

int num[1000001];

int N;
int min= 1000002;

int DivSum(int n){
	int curnum = n;
	int sum = 0;
	while(n != 0){
		int remainder;
		remainder = n % 10;
		sum +=remainder;
		n = n/10;
	}
	sum += curnum;
	return sum;
} 

int main(){
	int i,sum=0;
	scanf("%d",&N);
	for(i = 1; i < N;i++){
		sum = DivSum(i);
		if(sum == N){
			if(min > sum){
				min = i;
			}
		}
	}
	if(min == 1000002){
		min = 0;
	}
	printf("%d", min);
	return 0;
}
