#include <stdio.h>

int card[101];
int result = 0;
int N,M,num;
	
void CardSum( int index, int cnt, int sum ){
	if(cnt == 3 && sum <= M){
		if(sum > result){
			result = sum;
			return;
		}
	}
	if(index >= N || cnt >3 || sum >M){
		return;
	}
	CardSum(index + 1, cnt + 1, sum + card[index]);
	CardSum(index + 1, cnt, sum);
}

int main(){
	int i;
	scanf("%d %d", &N, &M );
	for(i = 0;i<N;i++){
		scanf("%d", &num);
		card[i] = num;
	}
	CardSum(0,0,0);
	printf("%d", result);
	return 0;
}


