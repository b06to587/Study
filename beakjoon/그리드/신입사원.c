	#include <stdio.h>
	#include <stdlib.h>
	#define MAX 100001
	typedef struct newP{
		int score1;
		int score2;
	}NEWP;
	
	int compare(const int *a, const int *b) {
		NEWP *num1 = (NEWP *) a;
		NEWP *num2 = (NEWP *) b;
		
		if(num1->score2 < num2->score2){
			return -1;
		}else if(num1->score2 > num2->score2)
			return 1;
		else return 0;	
	}
	int main(){
		NEWP newp[MAX];
		int T,n,i,first,second,cnt=1;
		
		scanf("%d",&T);
	
		
		while(T != 0){
			scanf("%d",&n);
			int total = n;
			for(i=0;i<n;i++){
				scanf("%d %d",&newp[i].score1, &newp[i].score2);
			}
			qsort(newp,n,sizeof(newp[0]),compare);
			first = newp[0].score1;
		
			for(i=1;i<n;i++){
				if(newp[i].score1 < first){
					first = newp[i].score1;
					cnt++;
				}
			}
			
			printf("%d\n", cnt);
			cnt = 1;
			T--;
		}
		return 0;
	} 
