#include <iostream>

using namespace std;
int a[5] = {11,7,5,3,2};
int b[5] = {0,};
int main(){
	int T,j,q,rest;
	cin >>T;
	for(int i=0; i<T;i++){
		for(int idx=0;idx<5;idx++){
			b[idx] = 0;
		}
		q = 0;
		j = 0;
		int num;
		cin >> num;
		while(num != 1){
			if(num % a[j] == 0){
				num = num / a[j];
				b[j]++;
			}else{
				j++;
			}
		}
		cout << "#" << i+1 << " ";
		for(int i=4;i>=0;i--){
			cout<< b[i] <<" ";
		}
		cout << endl;
	}
	
	return 0;
}
