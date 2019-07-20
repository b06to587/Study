#include <stdio.h>
// �迭 �ʱ� �� ���� & ���� ���� (8 * 8 ĭ)
int N = 8;
int grid[8][8] = {
    {1, 0, 0, 0, 0, 0, 0, 1} , // 1 ��
    {0, 1, 1, 0, 0, 1, 0, 0} , // 2 ��
    {1, 1, 0, 0, 1, 0, 1, 0} , // 3 ��
    {0, 0, 0, 0, 0, 1, 0, 0} , // 4 ��
    {0, 1, 0, 1, 0, 1, 0, 0} , // 5 ��
    {0, 1, 0, 1, 0, 1, 0, 0} , // 6 ��
    {1, 0, 0, 0, 1, 0, 0, 1} , // 7 ��
    {0, 1, 1, 0, 0, 1, 1, 1}   // 8 ��
};
	const int COLOREDCELL = 1; // �������� �ִ� ��
	const int WALL = 0;
	const int COUNTEDCELL = 2;	//�� 

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
	 printf("��ǥ ���� �Է����ּ��� : ");
    scanf("%d %d", &x, &y);
    printf("Blob �ȿ� %d ĭ�� �ֽ��ϴ�.", countCells(x , y));
	return 0;
}
