#include <stdio.h>

int main(){

  int n, temp;
  long long sum;
  while(scanf("%d", &n) != EOF){
    sum = 0;
    for(int i = 1 ; i <= n ; i++){
      scanf("%d", &temp);
      sum += temp * i;
    }

    printf("%lld\n", sum);

  }

  return 0;
}
