//https://www.acmicpc.net/problem/2798

#include <stdio.h>

using namespace std;

int input[100];

int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	int N,M, sum, result=0;
	scanf("%d %d",&N,&M);
	
	for(int i=0; i<N; i++){
		scanf("%d", &input[i]);
	}
	
	for(int i=0; i<N-2; i++){
		for(int j=i+1; j<N-1; j++){
			for(int k=j+1; k<N; k++){
				sum = input[i] + input[j] + input[k];
				if(sum<=M && sum>result){
					result = sum;
				}
			}
		}
	}
	
	printf("%d",result);
	return 0;
}
