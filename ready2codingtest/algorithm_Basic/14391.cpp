//https://www.acmicpc.net/problem/14391

#include<stdio.h>

using namespace std;
char arr[5][5];
int chk[5][5];
int N, M;
int max=0;

int R(int n, int m){
	if(n==(N-1)&&m==M){
		int visited[5][5] = {0,};
		int sum=0, tmp=0;

		for(int i=0; i<N; i++){
			for(int j=0; j<M; j++){
				if(chk[i][j]==1&&visited[i][j]==0){
					for(int k=0; chk[i][j+k]==1; k++){
						tmp=10*tmp+arr[i][j+k];
						visited[i][j+k]=1;
					}
				}
				else if(chk[i][j]==2){
					if(visited[i][j]==0){
						for(int k=0; chk[i+k][j]==2; k++){
							tmp=10*tmp+arr[i+k][j];
							visited[i+k][j]=1;
						}	
					}
				}
				sum+=tmp;
				tmp=0;
				

			}
		}
		if(max<sum) max=sum;
		return 0;
	}
	
	if(m<M){
		chk[n][m]=1;
		R(n,m+1);
		chk[n][m]=2;
		R(n,m+1);
	}
	else R(n+1,0);
}


int main(){
	scanf("%d %d",&N, &M);
	for(int i=0; i<N; i++){
		scanf("%s",arr[i]);
		for(int j=0; j<M; j++) {
			arr[i][j]-='0';
		}
	}
	
	R(0,0);
	
	printf("%d",max);
	
	return 0;
}
