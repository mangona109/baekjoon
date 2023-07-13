#include <stdio.h>

using namespace std;

char input[100];
char abc[26];
int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	

	scanf("%s",input);
	
	for(int i=0; input[i]!=0; i++){
		abc[input[i]-'a'] +=1;
	}
	
	for(int i=0; i<26; i++){
		printf("%d ",abc[i]);
	}
	
	return 0;
}
