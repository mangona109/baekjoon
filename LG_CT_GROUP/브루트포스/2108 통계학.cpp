//https://www.acmicpc.net/problem/2108

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int input[500000];
int freq[8001];

int main(void){
    //freopen("baekjoon_input.txt","rb",stdin);
    int N, sum=0, aver, mid, most=0, range;
    vector<int> most_list;
    scanf("%d",&N);
    
    for(int i=0; i<N; i++){
        scanf("%d", &input[i]);
        sum += input[i];
        freq[input[i] + 4000]++;
    }
    
    aver = round((double)sum / N);
    sort(input, input + N);
    mid = input[N/2];
    
    int max_freq = 0;
    for(int i=0; i<8001; i++){
        if(freq[i] > max_freq){
            most_list.clear();
            most_list.push_back(i - 4000);
            max_freq = freq[i];
        }
        else if(freq[i] == max_freq){
            most_list.push_back(i - 4000); 
        }
    }
    
    if(most_list.size() > 1){
        sort(most_list.begin(), most_list.end());
        most = most_list[1];
    }
    else{
        most = most_list[0];
    }
    
    range = input[N-1] - input[0];
    
    printf("%d\n%d\n%d\n%d", aver, mid, most, range);
    return 0;
}
