#include <stdio.h>

void recursion(int N, char from, char to, char spare){
  if(N == 1){
    printf("Move ring %d from %c to %c\n", N, from, to);
    return;
  }
  recursion(N-1, from, spare, to);
  printf("Move ring %d from %c to %c\n", N, from, to);
  recursion(N-1, spare, to, from);
}

int main(){
  int N;
  while(scanf("%d", &N) != EOF){
    recursion(N, 'A', 'C', 'B');
    printf("\n");
  }

  return 0;
}
