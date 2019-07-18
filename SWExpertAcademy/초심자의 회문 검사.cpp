#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

int a[15][15] = {0,};
using namespace std;

void CreateMap(int n){
	int map;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> map;
			a[i][j] = map;	
		}
	}
}

int FillArea(int k){
	for
}

int main(){
	int T,N,K;
	cin >>T;
	while(T!=0){
		cin >> N,K;
		CreateMap(N);
		FillArea(k);
		T--;
	}
	return 0;
}
	

