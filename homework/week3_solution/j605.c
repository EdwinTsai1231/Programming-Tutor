#include <stdio.h>

int main(void){
  int K, t, s;
  scanf("%d", &K);

  int max_score = -2, max_time = 0, error = 0;

  for(int i = 0 ; i < K ; i++){
    scanf("%d %d", &t, &s);
    if(s == -1) error++;
    if(s > max_score){
      max_score = s;
      max_time = t;
    }
  }
  int result = max_score - K - error * 2;
  printf("%d %d", result > 0 ? result : 0, max_time );

  return 0;
}
