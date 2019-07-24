#include <iostream>
#include <cmath>
#include <algorithm>
int small;
using namespace std;
int main(){
	int T,distance,cnt;
	cin >> T;
	
	for (int s =0 ; s<T;s++){
		cnt = 0;
		small = 1000001;
		int n;
		cin >> n;
		for(int i =0; i< n;i++){
			int num;
			cin >> num;
			distance = abs(num);
			if(distance < small){
				small = distance;
				cnt = 1;
				continue;
			}
			if(distance == small){
				cnt++;
			}
		}
		cout<< "#"<< s+1 <<" "<< small << " "<< cnt <<endl;
	}
	return 0;
}
