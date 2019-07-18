#include <iostream>
int a[15][15]={0,};
using namespace std; 

int killed,maxnum;

int KillFly(int n, int m){
	int numbeOfFly;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >>numbeOfFly;
			a[i][j] = numbeOfFly;	
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			killed=0;
			for(int z=i; z<m+i;z++){
				for(int t = j;t<m+j;t++){
					if(z <=n && t <= n )
					killed += a[z][t];
				}
			}
			if(maxnum < killed){
				maxnum = killed;
			}
		}
	}
	return maxnum;
}

int main(){
	int T,M,N,cnt=1;
	cin >> T;
	while (T!=0){
		cin >> N >>M ;
		maxnum =0;
		cout << "#" <<cnt << " " <<KillFly(N,M)<<endl;	
		cnt++;
		T--;
	}
	return 0;
}

