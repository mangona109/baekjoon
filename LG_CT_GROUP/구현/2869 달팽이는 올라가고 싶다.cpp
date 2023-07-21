//https://www.acmicpc.net/problem/2869

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  //freopen("baekjoon_input.txt","rb",stdin);
	int A,B,V,day=0;
	
	scanf("%d %d %d",&A,&B,&V);
		
	day=(V-B)/(A-B);
	if((V-B)%(A-B)!=0) day++;
	
	printf("%d",day);
	
	return 0;
}
