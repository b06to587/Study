#include <iostream>

using namespace std;

int main(){
	int n;
	cin >>n;
	for(int i =0; i< n;i++){
		int a, b,c=0,d=0;
		cin >>a >>b;
		c = a/b;
		d = a%b;
		cout <<"#"<< i+1 <<" "<<c<<" "<<d<<endl;
	}
	return 0;
}
