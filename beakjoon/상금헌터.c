#include <stdio.h>

int main(){
	int n,first, second, prize;
	
	scanf("%d", &n);
	while(n--){
		prize = 0;
		scanf("%d %d", &first,&second);
		
		if(first == 1)
			prize += 5000000;
		else if(1 < first && first <= 3)
			prize += 3000000;
		else if(3 < first && first <= 6)
			prize += 2000000;
		else if(6 < first && first <= 10)
			prize += 500000;
		else if(10 < first && first <= 15)
			prize += 300000;
		else if(15 < first && first <= 21)
			prize += 100000;
			
		if(second == 1)
			prize += 5120000;
		else if(1 < second && second <= 3)
			prize += 2560000;
		else if(3 < second && second <= 7)
			prize += 1280000;
		else if(7 < second && second <= 15)
			prize += 640000;
		else if(15 < second && second <= 31)
			prize += 320000;
			
		printf("%d\n", prize);
	}
	

	
		 
	
	return 0;
}
