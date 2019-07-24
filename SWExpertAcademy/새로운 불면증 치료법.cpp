#include<iostream>
int a[10]; 
using namespace std;
int main(){
	int T,rest,num,cnt,k,sum,temp;
	bool scount = true;
	cin >> T;
	for(int i =0; i<T;i++){
		for(int j= 0; j<10;j++){
			a[j] = 0;
		}
		int N;
		cin >> N;
		temp = N;
		cnt =0;
		 k= 1;
		scount = true;
		while(scount){
			num = N;
			cnt++;
			while(num!=0){
				rest = num%10;
				a[rest]=1;
				num = num/10;
			}
				k++;
				N = k * temp;
				sum = 0;
			for(int idx = 0; idx <10;idx++){
				sum += a[idx];
			}
			if(sum ==10) scount =false;
		}		
		cout << "#" << i+1 << " " << cnt * temp <<endl;
	}
	return 0;
}
