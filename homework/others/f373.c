#include <stdio.h>


int main(){

  int N;
  scanf("%d", &N);

  if(N/2000 * 200 >= N / 1000 * 100) printf("%d %d", N - (N/2000*200), 0);
  else printf("%d %d", N - (N/1000*100), 1);
  
  
  return 0;
}
