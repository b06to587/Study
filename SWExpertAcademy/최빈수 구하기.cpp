#include <iostream>
using namespace std;
int student[1000];
int scores[101];
int main(){
	int T,ans;
	cin >> T;
	for(int s=1; s<=T;s++){
		for(int t= 0 ;t<101;t++){
			scores[t] = 0;
		}
		int idx;
		cin >>idx;
		for(int i =0;i<1000;i++){
			int num;
			cin >> num;
			student[i] = num;
			for(int j= 0; j<101;j++){
				if(student[i] ==j)
				scores[j]++;
			}
		}
		ans = 0;
		int max = 0;
		for(int i=100;i>=0;i--){
			if(scores[i] > max ){
				ans = i;
				max = scores[i];
			}
		}	
		cout << "#" << idx << " " << ans <<endl;
	}
	return 0;
}
