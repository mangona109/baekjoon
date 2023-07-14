//https://www.acmicpc.net/problem/1260

#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

vector<int> adj_list[1001];
bool visited[1001];

void DFS(int num){
	printf("%d ", num);
	visited[num] = true;
	
	for(int i=0; i<adj_list[num].size(); i++){
		if(!visited[adj_list[num][i]]){
			visited[adj_list[num][i]] = true;
			DFS(adj_list[num][i]);
		}
	}
	return;		
}


void BFS(int start){
	queue<int> Q;
	int num;
	
	Q.push(start);
	visited[start] = true;
	
	while(!Q.empty()){
		num = Q.front();
		printf("%d ",num);
		Q.pop();
		for(int i=0; i<adj_list[num].size(); i++){
			if(!visited[adj_list[num][i]]){
				visited[adj_list[num][i]] = true;
				Q.push(adj_list[num][i]);
			}
		}
	}
	return;
}
int main(void){
	freopen("baekjoon_input.txt","rb",stdin);
	
	int N,M,V;
	int node1, node2;
	
	scanf("%d %d %d",&N,&M,&V);
	for(int i=0; i<M; i++){
		scanf("%d %d",&node1, &node2);
		adj_list[node1].push_back(node2);
		adj_list[node2].push_back(node1);
	}
	
	for(int i=1; i<=N; i++){
		sort(adj_list[i].begin(),adj_list[i].end());
	}

	DFS(V);
	printf("\n");
	memset(visited,0,sizeof(visited));
	BFS(V);
	
	return 0;
}
