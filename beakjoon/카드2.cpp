#include <iostream>
#include <queue>
#include <string>

using namespace std; 

int main(){
	queue<int> q;
	int N, data1,data2;
	cin >> N;
	
	for(int i=1; i <=N ;i++){
		q.push(i);
	}
	
	while(q.size()!=1){
		q.pop();
		data1 = q.front();
		q.pop();
		q.push(data1);
	}
	
	
	cout << q.front() << endl;
	
	
	return 0;
}
