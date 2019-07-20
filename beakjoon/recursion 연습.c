#include <stdio.h>
// 배열 초기 값 설정 & 변수 설정 (8 * 8 칸)
int N = 8;
int grid[8][8] = {
    {1, 0, 0, 0, 0, 0, 0, 1} , // 1 줄
    {0, 1, 1, 0, 0, 1, 0, 0} , // 2 줄
    {1, 1, 0, 0, 1, 0, 1, 0} , // 3 줄
    {0, 0, 0, 0, 0, 1, 0, 0} , // 4 줄
    {0, 1, 0, 1, 0, 1, 0, 0} , // 5 줄
    {0, 1, 0, 1, 0, 1, 0, 0} , // 6 줄
    {1, 0, 0, 0, 1, 0, 0, 1} , // 7 줄
    {0, 1, 1, 0, 0, 1, 1, 1}   // 8 줄
};
	const int COLOREDCELL = 1; // 지나갈수 있는 길
	const int WALL = 0;
	const int COUNTEDCELL = 2;	//벽 

int countCells(int x, int y){
	if(x<0 || y<0 || x>=N || y>=N){
		return 0;
	}
	else if(grid[x][y] != COLOREDCELL){
		return 0;
	}
	else {
		grid[x][y] = COUNTEDCELL;
		return 1  + countCells(x-1,y-1) + countCells(x-1,y) + countCells(x-1,y+1) + 
					countCells(x,y-1) + countCells(x,y+1) + 
					countCells(x+1,y-1) + countCells(x+1,y) + countCells(x+1,y+1);
	}
}

int main(){
	int x,y;
	 printf("좌표 값을 입력해주세요 : ");
    scanf("%d %d", &x, &y);
    printf("Blob 안에 %d 칸이 있습니다.", countCells(x , y));
	return 0;
}
