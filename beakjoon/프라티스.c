#include <stdio.h>

int Graph[1001][1001] = {0,};
int DFSvisit[1001] = {0,};
int BFSvisit[1001] = {0,};
int queue[1001];

void DFS(int v, int n){
	int i;
	DFSvisit[v] = 1;
	printf("%d ", v);
	for(i = 1; i<=n;i++){
		if(Graph[v][i]==1 && DFSvisit[i]==0){
			DFS(i,n);
		}
	}
	return;
}

void BFS(int v,int n){
	int front = 0, rear =0, Pop,i;
	printf("%d ",v);
	queue[0] = v;
	rear++;
	BFSvisit[v] = 1;
	
	while(fr)
	
}

int main(){
	int n,m,start;
	int i,x,y;
	
	scanf("%d %d %d", &n,&m,&start);
	
	for(i=0;i<5;i++){
		scanf("%d %d", &x,&y);
		Graph[x][y] = 1;
		Graph[y][x] = 1;
	}
	
	DFS(start,n);
	printf("\n");
	BFS(start,n);
	
	return 0;
}
