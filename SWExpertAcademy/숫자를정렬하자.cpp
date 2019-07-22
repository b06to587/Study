#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i =0;i<T;i++){
		int num;
		cin >> num;
		int a[num];
		for(int x= 0; x<num;x++){
			cin >>a[x];
		}
		sort(a,a+num);
		cout << "#"<<i+1<<" ";
		for(int j=0;j<num;j++){
			cout<< a[j]<< " ";
		}
		cout<<endl;
	}
	

	return 0;
} 
