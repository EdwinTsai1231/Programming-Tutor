#include <stdio.h>

int main(){
  int x;
  while(scanf("%d", &x) == 1){
    if( (x%4 == 0 && x%100!=0) || x%400 == 0) printf("閏年\n");
    else printf("平年\n");
  }
  return 0;
}
