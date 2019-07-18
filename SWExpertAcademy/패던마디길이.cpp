#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string str;
	cin >> n;
	for(int i =0;i< n;i++){
		cin >>str;
		int index = 0;
		for(int j=1;j<str.length();j++){
			if(str[j] == str[index]){
				index++;
			}else{
				index=0;
			}
	}
	cout << "#" << i+1 << " "<< str.length() - index<<endl;

}
	return 0;
}
