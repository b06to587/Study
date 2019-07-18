#include <iostream>
long long income = 0;
int cost[1000001];
using namespace std;
int main(){
	int n;
	cin >>n;
	for(int i = 0; i< n;i++){
		income = 0;
		int max_price = 0;
		int day;
		cin >> day;
		for( int j=0; j<day;j++){
			cin >> cost[j]; 
		}	
		max_price = cost[day - 1];
		for(int index = day-2; index >=0; index--){
			if(max_price > cost[index]){
				income += max_price - cost[index];
			}else{
				max_price = cost[index];
			}
			
		}
		cout <<"#"<<i+1<<" "<<income<<endl;
	}
	
	
	return 0;
}
