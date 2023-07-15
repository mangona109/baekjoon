//https://www.acmicpc.net/problem/24480

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int visit_order = 1;

void DFS(int num, vector<int> *adj_list, int *visited){
	visited[num] = visit_order++;
	for(int i=0; i<adj_list[num].size(); i++){
		if(visited[adj_list[num][i]]==0){
			DFS(adj_list[num][i], adj_list, visited);
		}
	}
	return;
}

int main(void){
	int N,M,R;
	int node1, node2;
	
	scanf("%d %d %d",&N,&M,&R);
	
	vector<int> adj_list[N+1];
	int visited[N+1] = {0};
	
	for(int i=0; i<M; i++){
		scanf("%d %d",&node1, &node2);
		adj_list[node1].push_back(node2);
		adj_list[node2].push_back(node1);
	}
	
	for(int i=1; i<N+1; i++){
		sort(adj_list[i].begin(),adj_list[i].end(),greater<int>());
	}
	
	DFS(R,adj_list,visited);
	
	for(int i=1; i<N+1; i++){
		printf("%d\n", visited[i]);
	}

	return 0;
}
