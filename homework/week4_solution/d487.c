#include<stdio.h>

long long sum;

void recursion(int n){
  if(n == 0) return;
  printf(" * %d", n);
  sum *= n;
  recursion(n-1);
  return;
}


int main(){
  int n;
  while(scanf("%d", &n) != EOF){
    sum = 1;
    printf("%d! = %d", n, n==0 ? 1 : n);
    if(n != 0){
      sum *= n;
      recursion(n-1);
    }
    printf(" = %lld\n", sum);
  }
  return 0;
}
