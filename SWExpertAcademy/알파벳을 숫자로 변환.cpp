#include <iostream>

using namespace std;

void convertTOAscii(string s){
	for(int i = 0;i<s.length();i++){
		cout<<(int)s[i]-64<<" ";
	}
}

int main(){
	string str;
	cin >>str;

	convertTOAscii(str);
	return 0;
}


