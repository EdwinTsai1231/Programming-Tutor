#include <stdio.h>

int main(){

  int N, T, days = 0;
  scanf("%d %d", &N, &T);
  int multiple = (N+T) / N;
  
  while(multiple > 1){
    days++;
    multiple /= 2;
  }

  printf("%d", days);
  

  return 0;
}
