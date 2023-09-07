#include <stdio.h>

int main(){

  int n;
  double sum, temp;
  while(scanf("%d", &n) != EOF){
    sum = 0;
    for(int i = 0 ; i < n ; i++){
      scanf("%lf", &temp);
      sum += temp;
    }

    if(sum / n > 59) printf("no\n");
    else printf("yes\n");


  }
  return 0;
}
