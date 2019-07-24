#include<iostream>

using namespace std;
int main(){
	int T;
	int param;
	cin >> T;
	for(int i =0; i<T;i++){
		int N;
		cin >> N;
		int speed= 0;
		int distance=0;
		for(int idx = 0; idx < N;idx ++){
			int command;
			cin >> command;
			switch(command){
				case 1:
					cin >> param;
					speed  += param;
					break;
				case 2 :
					cin >> param;
					speed -= param;
					if(speed < 0 ) speed = 0;
					break;
			}
			distance += speed;
		}
		cout << "#" << i+1 << " " << distance <<endl;
	}
	return 0;
}
