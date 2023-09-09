#include <stdio.h>
#define MAX_INPUT 10000
#define MAX_NUM 30000

int main(){

  int N, input[MAX_INPUT], max_count = -1, freq[MAX_NUM+1];
  scanf("%d", &N);

  for(int i = 0 ; i < MAX_NUM+1 ; i++) freq[i] = 0;


  for(int i = 0 ; i < N ; i++){
    scanf("%d", &input[i]);
    freq[input[i]]++;
    if(freq[input[i]] > max_count) max_count = freq[input[i]];
  }

  for(int i = 1; i < MAX_NUM+1 ; i++){
    if(freq[i] == max_count) printf("%d %d\n", i, max_count);
  }

  return 0;
}
