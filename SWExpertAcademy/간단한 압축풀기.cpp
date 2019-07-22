#include <iostream>
using namespace std;
int main(){
	char a[200];
	int T;
	cin >>T;
	for(int i =0;i<T;i++){
		int pos =0;
		int N;
		cin >> N;
		cout << "#" << i+1 <<endl;
		for(int j=0;j<N;j++ ){
			char c;
			int num;
			cin >> c >> num;
			for(int z = 0; z<num;z++){
				a[z+pos] = c;
			}
			pos += num;
			
		}
		for(int k = 0; k<pos;k++){
			cout << a[k];
			if((k +1 ) %10==0 && k>0){
				cout <<endl;
			}
			
		}
		cout <<endl;
	}
	return 0;
}
