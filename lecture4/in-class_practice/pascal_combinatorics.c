#include <stdio.h>

int combination(int m, int n){
  if(n == 0 || m == n) return 1;

  if(m-n < n)
    n = m-n;

  return combination(m-1, n) + combination(m-1, n-1);
}

int main(void){
  
  int m, n;
  scanf("%d %d", &m, &n);

  printf("The combination of m choose n: %d", combination(m, n));

  return 0;
}
