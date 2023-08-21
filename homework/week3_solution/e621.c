#include <stdio.h>

int main(void){
  int N;
  scanf("%d", &N);

  int A, B, C, isEmpty = 1;
  while(N--){
    isEmpty = 1;
    scanf("%d %d %d", &A, &B, &C);
    for(int i = A + 1; i < B; i++){
      if(i % C != 0){
        printf("%d ", i);
        isEmpty = 0;
      }
    }
    if(isEmpty)
      printf("No free parking spaces.");
    printf("\n");
  }


  return 0;
}
