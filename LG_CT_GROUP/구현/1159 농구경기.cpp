//https://www.acmicpc.net/problem/1159

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

char abc[26];

int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	
	int num;
	char last[30];
	bool flag = false;
	scanf("%d", &num);
	
	for(int i=0; i<num; i++){
		scanf("%s",last);
		abc[last[0]-'a']+=1;
	}
	
	for(int i=0; i<26; i++){
			if(abc[i]>=5) {
			printf("%c",i+'a');
			flag = true;	
		}
	}
	
	if(!flag){
		printf("PREDAJA");	
	}
	
	return 0;
}
