#include <iostream>
using namespace std;
int pick;
int main(){
	int T;
	cin >> T;
	for(int s=1; s<=T;s++){
		int P, Q, R, S, W;
		cin >> P >> Q >> R >> S >>W;
		int Acost,Bcost;
		Acost = P * W;
		if(W <R){
			Bcost= Q;
		}else{
			Bcost= Q + (W-R) * S;
		}
		if(Acost < Bcost)
			pick = Acost;
		else
			pick = Bcost;
			
		cout << "#" << s << " " << pick <<endl;
	}
	return 0;
}
