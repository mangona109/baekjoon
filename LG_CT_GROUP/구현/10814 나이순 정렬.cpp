#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(pair<int,string> A, pair<int,string> B){
	return A.first < B.first;
}


int main(void){
	//freopen("input.txt","rb",stdin);
	
	int N;
	scanf("%d",&N);
	
	vector<pair<int,string> > people;
	int age;
	char name[100];
	
	for(int i=0; i<N; i++){
		scanf("%d %s",&age, name);
		people.push_back({age,string(name)});
	}

	stable_sort(people.begin(),people.end(),compare);
	
	for(int i=0; i<N; i++){
		printf("%d %s\n",people[i].first,people[i].second.c_str());
	}
	
	return 0;
}
