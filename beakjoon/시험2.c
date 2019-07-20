#include<stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution (int arr1[], size_t arr1_m,int arr2[], size_t arr2_m){
	int answer = 0;
	int temp1[14] ={0,};
	int temp2[14] ={0,};
	int i =0,j=0, max1=0, max2=0;
	for(i=0;i<7;i++){
		for(j=1;j<14;j++){
			if(arr1[i]==j){
				temp1[j]++;
			}
			if(arr2[i]==j){
				temp2[j]++;
			}
		}
	}
	
	for(i=0;i<14;i++){
		if(temp1[i] >max1){
			max1 = i;
		}
		if(temp2[i] >max2){
			max2 = i;
		}
	}
	if (temp1[max1] >=5){
		temp1[max1] =4;
	}
	if (temp2[max2] >=5){
		temp2[max2] =4;
	}
	
	
	printf("%d %d\n", max1, max2);
	if(temp1[max1] == 1 && temp2[max2]==1){
		answer =0;
		return answer;
	}
	if(temp1[max1] > temp2[max2] ){
		answer = 1;
	}else {
		answer = 2;
	}
	if(temp1[max1] == temp2[max2] && max1 < max2){
		answer = 2;
	}
	else if(max1 > max2){
		answer = 1;
	}
	for(i=0;i<14;i++){
		printf("%d", temp1[i]);
	}
	printf("\n");
	for(i=0;i<14;i++){
		printf("%d", temp2[i]);
	}
	printf("\n");

	return answer;
}

int main(){
	int arr1[7];
	int arr2[7];
	int i;	
	int * ans;
	for(i=0;i<7;i++){
		scanf("%d", &arr1[i]);
	}
	for(i=0;i<7;i++){
		scanf("%d", &arr2[i]);
	}
	ans = solution(arr1, 7, arr2,7);
	printf("%d", ans);
	return 0;
}
