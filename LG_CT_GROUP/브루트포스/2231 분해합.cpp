//https://www.acmicpc.net/problem/2231

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  //freopen("baekjoon_input.txt","rb",stdin);
	int N,len=0,result=0;
	scanf("%d",&N);

	for(int i=N; i!=0; i/=10){
		len+=1;
	}
	
	for(int i=N-9*len; i<=N; i++){
		result=i;
		for(int j=i; j!=0; j/=10){
			result+=j%10;
		}
		
		if(result==N){
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
	
	return 0;
}
