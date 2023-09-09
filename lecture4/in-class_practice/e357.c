#include <stdio.h>

int recursion(int x){
  if(x == 1) return 1;
  else if(x%2 == 0) return recursion(x / 2);
  else return recursion(x-1) + recursion(x+1);
}

int main(){

  int x;
  scanf("%d", &x);
  printf("%d", recursion(x));
  return 0;
}
