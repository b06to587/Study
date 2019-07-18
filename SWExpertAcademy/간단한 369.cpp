#include <iostream>

int count;
using namespace std;

int count369(int n){
	int number;
	while(n!=0){
		number = n%10;
		if(number ==3 || number ==6 || number ==9){
			count++;
		}
		n = n/10;
	}
	return count;
}

int main(){
	int n;
	cin >> n;
	for(int i =1;i<=n;i++){
		count =0;
		count = count369(i);
		if(count ==0 ){
			cout<<i<<" ";
		}else{
			for(int j=0;j<count;j++){
				cout<<"-";
			}
			cout<<" ";
		}
		
	}
	
	return 0;	
}
