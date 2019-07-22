#include <iostream>
using namespace std;
int leftMoney[8] = {50000,10000,5000,1000,500,100,50,10};
int aMoney[8];
int main(){
	int T;
	cin >> T;
	for(int i =0;i<T;i++){
		int money,idx = 0;
		for(int z = 0;z <8;z++){
			aMoney[z] =0;
		}
		cin>> money;
		while(money >9){
			if(leftMoney[idx] <= money){
				int left = money / leftMoney[idx];
				aMoney[idx] = left;
				money = money - leftMoney[idx] * left;
			}
			idx++;
		}
		
		cout << "#"<<i+1<<endl;
		for(int j=0;j<8;j++){
			cout<< aMoney[j]<< " ";
		}
		cout<<endl;
	}
	

	return 0;
} 
