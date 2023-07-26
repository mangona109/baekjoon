//https://www.acmicpc.net/problem/2292

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


int main(void){
//freopen("input.txt","rb",stdin);
	
	int N,result=1,prev=1;
	scanf("%d",&N);
	
	if(N==1){
		printf("1");
		return 0;
	}
	for(int i=2; i<=N; i++){
		if(i>prev+6*result){
			prev=prev+6*result;
			result++;
		}
	}
	
	printf("%d",result+1);
	
	return 0;
}
