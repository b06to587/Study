#include <stdio.h>
#include <stdlib.h> 

int compare (const int *a, const int *b){
	return *a < *b ? -1 : ( *a > *b ? 1 : 0);
}

int main(){
	int N,i,k = 0; 
	int temp = 0;
	int A[N];
	int sum =0, data = 0;
	//����� ���� �޴´� 
	scanf("%d", &N);
 	// �ɸ��� �ð��� �޴´� 
	for(i =0; i<N;i++ ){
		scanf("%d", &A[i]);
	}
 	
 	qsort(A, N, sizeof(int),compare);
 	
	for(i = 0; i<N;i++ ){
	 	k= 0;
 		while(k <=i ){
 			data += A[k]; 
 			k++;
		}
		sum += data;
		data = 0;
	} 
	printf("%d\n",sum);
	 return 0;
 	
}
