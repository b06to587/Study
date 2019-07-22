#include <iostream>
#include <cmath>
using namespace std;
int sum, maxsum;
int main(){
	int T;
	cin >> T;
	for(int i =0;i<T;i++){
		maxsum=0;
		int num,num2;
		cin >> num>> num2;
		int a[num], b[num2];
		
		for(int x= 0; x<num;x++){
			cin >> a[x];
		}
		for(int x= 0; x<num2;x++){
			cin >> b[x];
		}
		int dif;
		int small;
		if( num > num2){
			small = num2;
			dif = num - num2;
		}else{
			small = num;
			dif = num2 - num;
		}
		
		for(int idx =0; idx<= dif; idx++){
			sum=0;
			for(int j= 0; j<small; j++){
				if(small ==num)
				sum += a[j] * b[idx+j];
				else
				sum += a[j+idx] * b[j];
			}
			if(sum > maxsum){
				maxsum = sum;
			}
		}
		
		cout << "#"<<i+1<<" "<<maxsum<<endl;
	}
	
	return 0;
} 
