#include <stdio.h>

int main(){

  int T, N, M, flag = 0;
  scanf("%d", &T);
  int original[10][10];
  while(T--){
    flag = 0;
    for(int i = 0 ; i < 10 ; i++)
      for(int j = 0 ; j < 10 ; j++)
        original[i][j] = -1;

    scanf("%d %d", &N, &M);
    for(int i = 0 ; i < N ; i++)
      for(int j = 0 ; j < M ; j++)
        scanf("%d", &original[i][j]);

    for(int i = 0 ; i < N ; i++){
      for(int j = 0 ; j < M ; j++){
        if(original[i][j] != original[N-1-i][M-1-j]){
          flag = 1;
          break;
        }
      }
      if(flag == 1) break;
    }

    if(flag == 1) printf("keep defending\n");
    else printf("go forward\n");




  }
  return 0;
}
