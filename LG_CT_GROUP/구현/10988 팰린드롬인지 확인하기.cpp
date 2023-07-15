//https://www.acmicpc.net/problem/10988

#include <stdio.h>
#include <string.h>

using namespace std;


int main(void){
	freopen("baekjoon_input.txt","rb",stdin);
	char input[100];
	int len;
	bool flag = true;
	scanf("%s", input);
	
	len = strlen(input)-1;
	for(int i=0; i<(len+1)/2; i++){
		if(input[i]!=input[len-i]){
			flag = false;
			break;
		}
	}
	
	if(flag) printf("1");
	else printf("0");
}
