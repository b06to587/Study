#include <iostream>
using namespace std;
int snail[10][10] = {0,};
void DrawSnail(int num){
	int size = num;
	snail[num][num] = {0,};
	int n=1;
	int i = 0;
	int j = -1;
	int mul = num * num;
	int change =1;
	while(n != mul+1){
		for(int c=0;c<num;c++){
			j = j+change;
			snail[i][j] = n;
			n++;
		}
		num--;
		if(num == 0){
			break;
		}
		for(int c=0;c<num;c++){
			i = i + change;
			snail[i][j] = n;
			n++;
		}
		change = -change;
	}

	for(int i =0; i <size ; i++){
		for(int j=0;j<size ;j++){
			cout << snail[i][j]<<" ";
		}
		cout << endl;
	}	
}
int main(){
	int T,cnt=1;
	cin >> T;
	while(T!=0){
		int n;
		cin >>n;
		cout << "#" << cnt<<endl;
		DrawSnail(n);
		cnt++;
		T--;
	}
	return 0;
}
