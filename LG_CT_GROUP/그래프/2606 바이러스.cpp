// https://www.acmicpc.net/problem/2606

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> adj[101];
bool visited[101];
int infect_count = 0;

void DFS(int num){
	visited[num] = true;
	
	for(int i=0; i<adj[num].size();i++){
		if(visited[adj[num][i]]==0){
			DFS(adj[num][i]);
			infect_count+=1;          
		}
	}
	return;
}

int main(void){
	freopen("baekjoon_input.txt","rb",stdin);
	
	int N,B;
	int node1, node2;
	
	scanf("%d\n%d",&N,&B);
	
	for(int i=0; i<B; i++){
		scanf("%d %d",&node1, &node2);
		adj[node1].push_back(node2);
		adj[node2].push_back(node1);
	}
	
	DFS(1);
	
	printf("%d",infect_count);	

	return 0;
}
