#include <iostream>
#include <vector>
long long n,k;
using namespace std;

int main(){
	int T;
	cin >> T;
	
	for(int s=1;s<=T;s++){
		long long num;
		cin >> num;
		num = num -1;
		n = num* num *2 +1;
		num = num +1;
		k = num* num *2 -1;
		cout << "#" <<s << " " <<n<<" "<< k<<" " <<endl;
	}
	return 0;
}
