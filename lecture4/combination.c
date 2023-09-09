#include <stdio.h>

int combination(int, int);
int factorial(int);

int main(){

  int m, n;
  scanf("%d %d", &m, &n);
  printf("%d", combination(m, n));
  return 0;
}

int factorial(int x){
  int res = 1;
  while( x > 0){
    res *= x;
    x--;
  }
  return res;
}

int combination(int m, int n){
  int a = factorial(m);
  int b = factorial(n) * factorial(m-n);

  return a/b;
}
