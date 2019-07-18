#include <iostream>

using namespace std;

void convertUpper(string s){
	for(int i = 0;i<s.length();i++){
		s[i] = toupper(s[i]);
		cout<<s[i];
	}
}

int main(){
	string str;
	cin >>str;

	convertUpper(str);
	return 0;
}


