#include <stdio.h>

int X,Y;
char board[50][50] = {0,};
char whiteFirst[8][8] = {

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" }

};

char blackFirst[8][8] = {

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" },

        { "BWBWBWBW" },

        { "WBWBWBWB" }

};
int main(){
	int i,j,cnt = 0,a,b;
	
	scanf("%d %d", &X,&Y );

	for(a=0;a< X;a++){
		for(b=0;b<Y;b++){
			scanf(" %c", &board[a][b]);
		}
	}
	for(a=0; a<X ; a++){
		for(b=0; b<Y; b++){
			for(i=a; i<8+a ; i++){
				for(j=b; j<8 +b; j++){
					if(board[0][0] == 'W'){
						if(board[i][j] != whiteFirst[i][j])
						cnt++;
						
					}else if(board[0][0] == 'B'){
						if(board[i][j] != blackFirst[i][j])
						cnt++;
					}
				}
			}
		}
	}
			

	
	printf("%d", cnt);

	return 0;
}

