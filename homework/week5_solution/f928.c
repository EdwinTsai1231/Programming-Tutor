#include <stdio.h>

int bombs[1000];

void dfs(int N, int curr){
  if(curr < 0 || curr >= N || bombs[curr] == 0) return;

  if(bombs[curr] == 1){
    bombs[curr] = 0;
  }else if(bombs[curr] == 2){
    bombs[curr] = 0;
    dfs(N, curr-1);
    dfs(N, curr+1);
  }else{
    int num = bombs[curr];
    bombs[curr] = 0;
    dfs(N, curr-num);
    dfs(N, curr-num*2);
    dfs(N, curr+num);
    dfs(N, curr+num*2);
  }
  return ;
}


int main(){

  int N, T;
  scanf("%d", &N);
  for(int i = 0 ; i < N ; i++) scanf("%d", &bombs[i]);
  scanf("%d", &T);

  dfs(N, T);
 
  for(int i = 0 ; i < N ; i++) printf("%d ", bombs[i]);
  return 0;
}
