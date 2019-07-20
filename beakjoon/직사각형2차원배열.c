#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int v[][2], size_t v_len) {

	int i,j;
    int* answer = (int*)malloc(sizeof(int) * 2);
    for(i=0;i<v_len;i++){
		scanf("%d %d", &v[i][0] , &v[i][1] );
	}
	
    if(v[0][0]==v[1][0]){
		if(v[0][1]==v[2][1]){
			answer[0] = v[2][0];
			answer[1] = v[1][1];
		
		}else{
			answer[0] = v[2][0];
			answer[1] = v[0][1];
		
		}
	}else if(v[0][0] == v[2][0]){
		if(v[0][1]==v[1][1]){
			answer[0] = v[1][0];
			answer[1] = v[2][1];
		
		}else {
			answer[0] = v[1][0];
			answer[1] = v[0][1];
	
			}
	}else if(v[1][0] == v[2][0]){
		if(v[2][1]==v[0][1]){
			answer[0] = v[0][0];
			answer[1] = v[1][1];
			
		}else{
			answer[0] = v[0][0];
			answer[1] = v[2][1];
			
		}
	}
    
    return answer;
}

int main(){
	size_t v_len = 3;
    int a[][2]= {0,};
    int * ans;
	ans = solution(a, v_len );
    printf("%d %d", ans[0], ans[1]);
    
    //free(ans);
    
    return 0;
}
