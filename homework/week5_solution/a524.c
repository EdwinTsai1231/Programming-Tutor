#include <stdio.h>

void permutation(int flag[], int buffer[], int idx, int n){
  if(idx == n){
    for(int i = 0 ; i < n ; i++)
      printf("%d", buffer[i]);
    printf("\n");
  }

  for(int i = n-1 ; i >= 0 ; i--){
    if(flag[i] == 1) continue;
    flag[i] = 1;
    buffer[idx++] = i+1;
    permutation(flag, buffer, idx, n);
    idx--;
    flag[i] = 0;
  }
}


int main(){

  int n;
  while(scanf("%d", &n) != EOF){
    int flag[n], buffer[n];
    for(int i = 0 ; i < n ; i++)
      flag[i] = 0;

    permutation(flag, buffer, 0, n);

  }
  return 0;
}
