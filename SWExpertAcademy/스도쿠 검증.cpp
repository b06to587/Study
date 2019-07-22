#include <iostream>
using namespace std;
int sdoku[9][9];
int hsum,vsum,ssum,ans=1;
void IsSudoku(){
	for(int i=0;i<9;i++){
		hsum =0;
		vsum =0;
		for(int j=0;j<9;j++){
			hsum += sdoku[i][j];
			vsum += sdoku[j][i];
		}
		if(hsum != 45 || vsum != 45){
			ans = 0;
			break;
		}
	}
	for(int x = 0; x <=6; x +=3){
		for(int y = 0 ; y <=6 ;y += 3){
			ssum =0;
			for(int i=x;i<x+3;i++){
				for(int j=y;j<y+3;j++){
					ssum += sdoku[i][j];
				}
			}
			if(ssum != 45){
					ans = 0;
					break;
				}
		}
	}
}
	
int main(){
	int T;
	cin >>T;
	for(int num =0 ;num <T;num++){
		ans =1;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cin >> sdoku[i][j];
			}
		}		
		IsSudoku();
		cout << "#" << num+1 << " " <<ans<<endl;
	}
	return 0;
}
