//https://www.acmicpc.net/problem/2839

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  //freopen("baekjoon_input.txt","rb",stdin);
	int N;
	int five=0, three=0;
	scanf("%d",&N);
	
	five = N/5;
	N%=5;
	while((N%3)!=0){
		if(five==0) break;
		N+=5;
		five-=1;
	}
	
	if(N%3==0){
		three=N/3;
		printf("%d",three+five);
	}
	else printf("-1");
	
	return 0;
}
