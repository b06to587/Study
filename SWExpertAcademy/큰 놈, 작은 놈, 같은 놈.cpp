#include <iostream>
using namespace std;
int main(){
	int a,b,n;
	cin >>n;

	for(int i = 0;i< n;i++){
		cin >> a>>b;
		if(a < b){
			cout <<"#"<< i+1 << " "<< "<" << endl;
		}else if(a == b){
			cout <<"#"<< i+1 << " "<< "=" << endl;
		}else{
			cout <<"#"<< i+1 << " "<< ">" << endl;
		}
		
	}
	return 0;
}
