//https://www.acmicpc.net/problem/2979

#include <stdio.h>

using namespace std;

int timeline[101];
int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	
	int A,B,C; 
	int start, end;
	int cost=0;
	scanf("%d %d %d",&A, &B, &C);
	
	for(int i=0; i<3; i++){
		scanf("%d %d",&start, &end);
		for(int i=start; i<end; i++){
			timeline[i]+=1;
		}
	}
	
	
	for(int i=1; i<=100; i++){
		if(timeline[i]==1){
		cost += A;	
		}
		else if(timeline[i]==2){
		cost += 2*B;	
		}
		else if(timeline[i]==3){
		cost += 3*C;	
		}
	}
	
	printf("%d",cost);
	return 0;
}
