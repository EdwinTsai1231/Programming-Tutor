#include <stdio.h>


int main(){

  int N;
  scanf("%d", &N);

  int A, F;
  while(N--){
    scanf("%d %d", &A, &F);

    while(F--){
      if (A == 0) break;
      for(int i = 1 ; i <= A-1 ; i++){
        for(int j = 1 ; j <= i ; j++) 
          printf("%d", i);
        printf("\n");
      }
      for(int i = 0 ; i < A ; i++)
        printf("%d", A);
      printf("\n");

      for(int i = A-1 ; i > 0 ; i--){
        for(int j = i ; j > 0 ; j--)
          printf("%d", i);
        printf("\n");
      }
      printf("\n");
    }
  }
  return 0;
}
