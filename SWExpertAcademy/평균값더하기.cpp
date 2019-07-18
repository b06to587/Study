#include <iostream>
#include <cmath>
using namespace std;
double avg,sum;
int main(){
	int n;
	cin >> n;
	int a = 1;
	while(n!=0){
		sum = 0;
		avg = 0;
		for(int i =0;i < 10;i++){
			int num;
			cin >>num;
			sum += num;
		}
		avg = round(sum/10);
		cout <<"#"<< a << " "<< avg<< endl;
		n--;
		a++;
	}

	return 0;
}
