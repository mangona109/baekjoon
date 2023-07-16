// https://www.acmicpc.net/problem/1012

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

queue<pair<int,int>> Q;
bool map[51][51];

int adj_x[4] = {0,0,-1,+1};
int adj_y[4] = {+1,-1,0,0};
int bugs = 0;

void DFS(int xx, int yy){
	map[xx][yy]=0;
	
	for(int i=0; i<4; i++){
		if(map[xx+adj_x[i]][yy+adj_y[i]]==1){
			DFS(xx+adj_x[i],yy+adj_y[i]);
		}
	}
}

int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	
	int num;
	int M,N,K;
	int x,y;
	
	scanf("%d", &num);
	for(int k = 0; k<num; k++){
		bugs = 0;
		scanf("%d %d %d",&M,&N,&K);
		for(int i=0; i<K; i++){
			scanf("%d %d",&x,&y);
			map[x][y]=1;
		}
		for(int i=0; i<M; i++){
			for(int j=0; j<N; j++){
				if(map[i][j]==1){
					DFS(i,j);
					bugs+=1;
				}
			}
		}
		printf("%d\n",bugs);
	}
	
	return 0;
}
