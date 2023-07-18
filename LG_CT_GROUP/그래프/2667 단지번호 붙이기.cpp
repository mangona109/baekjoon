#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

char map[51][51];

int adj_x[4] = {0,0,-1,+1};
int adj_y[4] = {+1,-1,0,0};

int house = 0;
int danji = 0;
void DFS(int xx, int yy){
	map[xx][yy]=0;
	house+=1;
	
	for(int i=0; i<4; i++){
		if(map[xx+adj_x[i]][yy+adj_y[i]]=='1'){
			DFS(xx+adj_x[i],yy+adj_y[i]);
		}
	}
}

int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	
	int num;
	int M,N,K;
	int x,y;
	vector<int> houses;
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%s",map[i]);
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(map[i][j]=='1'){
				DFS(i,j);
				danji+=1;
				houses.push_back(house);
				house=0;
			}
		}
	}
	
	sort(houses.begin(),houses.end());
	printf("%d\n",danji);
	for(auto i : houses){
		printf("%d\n",i);
	}
	
	
	return 0;
}
