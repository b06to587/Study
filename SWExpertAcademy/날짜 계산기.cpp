#include <iostream>
using namespace std;
int days;
int main(){
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int T;
	cin >>T;
	for(int i =0;i<T;i++){
		days = 0; 
		int firstmonth, firstday, secondmonth, secondday;
		cin >> 	firstmonth >>firstday>> secondmonth >> secondday;
		if(firstmonth == secondmonth){
			days = secondday - firstday + 1;
		}else{
			for(int j= firstmonth+1; j<secondmonth; j++){
				days += a[j-1];
			}
			days += secondday;
			days += a[firstmonth-1] - firstday +1;
		}
	
		
		cout << "#" << i+1 << " " << days<<endl;
	}
	return 0;
}
