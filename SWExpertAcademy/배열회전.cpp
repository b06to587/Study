#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int T;
	cin >> T;
	for(int i =0;i<T;i++){
		int num;
		cin >> num;
		int a[num][num];
		for(int x= 0; x<num;x++){
			for(int y =0;y<num;y++){
				cin >> a[x][y];
			}
		}
		
		cout << "#"<<i+1<<endl;
		for(int x= num-1; x>=0;x--){
			for(int y = num-1;y>=0;y--){
				cout << a[y][abs(x-(num-1))];
			}
			cout <<" ";
			for(int y = num-1;y>=0;y--){
				cout << a[x][y];
			}
			cout <<" ";
			for(int y = 0;y<num;y++){
				cout << a[y][x];
			}
			cout<<endl;
		}	
	}
	
	return 0;
} 
