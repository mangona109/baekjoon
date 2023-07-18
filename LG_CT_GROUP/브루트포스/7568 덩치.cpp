#include <stdio.h>
//https://www.acmicpc.net/problem/7568

#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    freopen("baekjoon_input.txt","rb",stdin);
    int N,W,H;
    vector<pair<int,int>> info;
    
	scanf("%d",&N);
    
    for(int i=0; i<N; i++){
    	scanf("%d %d",&W,&H);
    	info.push_back({W,H});
	}
	
	for (int i = 0; i < N; i++) {
        int rank = 1;
        for (int j = 0; j < N; j++) {
            if (i == j) continue;
            if (info[i].first < info[j].first && info[i].second < info[j].second)
                rank+=1;       
        }
        printf("%d ",rank); 
    }
	return 0;
}
