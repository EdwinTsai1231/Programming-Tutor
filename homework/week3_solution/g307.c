#include <stdio.h>
#include <stdbool.h>

int main(){
  int N, K;
  bool is_empty = true;
  double T;
  scanf("%d %d %lf", &N, &K, &T);
  

  double score = 0, sum = 0, min_score = 1001, max_score = -1;
  for(int i = 0 ; i < N ; i++, sum = 0, min_score = 1001, max_score = -1){
    for(int j = 0 ; j < K ; j++){
      scanf("%lf", &score);
      if(score < min_score) min_score = score;
      if(score > max_score) max_score = score;
      sum += score;
    }
    sum -= min_score;
    sum -= max_score;
    if(sum >= T * (K-2)){
      printf("%d\n", i);
      is_empty = false;
    }
  }
  if(is_empty) printf("A is for apple.\n");

  return 0;
}
