#include <iostream>

using namespace std;

int main(){
	int pw,start,count = 1;
	cin >>pw >> start;
	for( int i=start;i< pw;i++){
		count++;
	}
	cout << count;
	return 0;
}


