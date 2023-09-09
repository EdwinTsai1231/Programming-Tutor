#include <stdio.h>

int main(){

  int n, m;
  while(scanf("%d %d", &n, &m) != EOF){
    if(n>m){
      printf("%d\n", 1);
    }else{
      int idx = 0;
      for(int i = n, sum = 0 ; sum <= m; i++, idx++){
        sum += i;
      }
      printf("%d\n", idx);
    }
  }


}
