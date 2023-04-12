//https://www.acmicpc.net/problem/2156

#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;

int N,arr[10001],D[10001];

void F(void){
	for(int num=0; num<N; num++){
		if(num==0) D[num]=arr[0];
		else if(num==1) D[num]=arr[0]+arr[1];
		else if(num==2){
			vector<int> tmp = {arr[0]+arr[1],arr[0]+arr[2],arr[1]+arr[2]};
			D[num]=*max_element(tmp.begin(),tmp.end());
		}
		else{
			vector<int> tmp = {D[num-1],D[num-2]+arr[num],D[num-3]+arr[num-1]+arr[num]};
			D[num]=*max_element(tmp.begin(),tmp.end());
		}	
	}
}

int main(){
	scanf("%d",&N);
	
	for(int i=0; i<N; i++){
		scanf("%d", &arr[i]);	
	}
	
	F();
	
	printf("%d",D[N-1]);
	return 0;
}
