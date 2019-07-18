#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
int main(){
	int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int num[8];
	int n;
	cin >>n;
	for(int i =0; i<n ;i++){
		string str;
		cin >>str;
		int month = atoi(str.substr(4,2).c_str());
		int day = atoi(str.substr(6,2).c_str());

		if(months[month-1]  < day ){
			cout <<"#"<<i+1 <<" "<< -1<<endl;
		}else{
			cout<<"#"<<i+1 <<" "<<str.substr(0,4)<<"/"<<str.substr(4,2)<<"/"<<str.substr(6,2)<<endl;
		}
	}
	return 0;
}
