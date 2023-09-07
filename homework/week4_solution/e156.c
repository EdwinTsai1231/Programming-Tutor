#include <stdio.h>

long long sum;
int recursion(int n){
  sum += n;
  n && recursion(n-1);
  return 0;
}

int main(){

  int n;
  scanf("%d", &n);
  sum = 0;
  recursion(n);
  printf("%lld", sum);
  return 0;
}
