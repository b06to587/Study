#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){
	stack<char> s;
	string str;
	cin >> str;
	s.push('(');
	cout<<s.top() <<endl; 
	return 0;
}
