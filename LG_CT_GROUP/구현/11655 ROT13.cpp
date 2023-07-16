//https://www.acmicpc.net/problem/11655

#include <stdio.h>
using namespace std;

char input[101];
int main(void){
	//freopen("baekjoon_input.txt","rb",stdin);
	
	fgets(input,101,stdin);
	for(int i=0; input[i]!=0; i++){
		if(input[i]>='A' && input[i]<='Z'){
			input[i]=((input[i]-'A')+13)%26+'A';
		}
		else if(input[i]>='a' && input[i]<='z'){
			input[i]=((input[i]-'a')+13)%26+'a';
		}
	}
	
	printf("%s",input);
	return 0;
}
